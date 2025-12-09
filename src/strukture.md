# Strukture

`struct` združuje več vrednosti (polja) v enotno podatkovno vrsto. Uporabimo ga, ko želimo povezati podatke, ki konceptualno sodijo skupaj.

## Definicija in uporaba

```cpp
#include <iostream>
#include <string>

struct Oseba {
    std::string ime;
    int starost;
};

int main() {
    Oseba ana{"Ana", 21};      // seznam inicializatorjev
    Oseba boris;                // neiniciliziran; vrednosti nastavimo ročno
    boris.ime = "Boris";
    boris.starost = 19;

    std::cout << ana.ime << " ima " << ana.starost << " let\n";
    std::cout << boris.ime << " ima " << boris.starost << " let\n";
    return 0;
}
```

-   Člani strukture so dostopni z `.` (npr. `ana.starost`).
-   `struct` je po privzetem javen (public); pri `class` so člani po privzetem zasebni (private).

## Funkcije in `const`

Strukture lahko posredujemo funkcijam. Uporabimo referenco, da se izognemo kopiranju, in `const`, če podatkov ne spreminjamo.

```cpp
#include <iostream>

struct Tocka {
    int x;
    int y;
};

void izpisi(const Tocka& t) {
    std::cout << "(" << t.x << ", " << t.y << ")\n";
}

int main() {
    Tocka p{3, 4};
    izpisi(p);
}
```

## Enosmerno povezan seznam

Enosmerno povezan seznam je zaporedje vozlišč, kjer vsako vozlišče kaže na naslednje. Osnovni primer z dodajanjem na začetek in izpisom:

```cpp
#include <iostream>

struct Vozlisce {
    int vrednost;
    Vozlisce* naslednje;
};

void push_front(Vozlisce*& glava, int vrednost) {
    Vozlisce* novo = new Vozlisce{vrednost, glava};
    glava = novo;
}

void izpisi(const Vozlisce* glava) {
    const Vozlisce* p = glava;
    while (p != nullptr) {
        std::cout << p->vrednost << " ";
        p = p->naslednje;
    }
    std::cout << "\n";
}

void pocisti(Vozlisce*& glava) {
    while (glava != nullptr) {
        Vozlisce* naslednje = glava->naslednje;
        delete glava;
        glava = naslednje;
    }
}

int main() {
    Vozlisce* glava = nullptr;
    push_front(glava, 3);
    push_front(glava, 2);
    push_front(glava, 1);

    izpisi(glava); // izpiše 1 2 3
    pocisti(glava);
}
```

-   `Vozlisce*` hrani naslov naslednjega vozlišča ali `nullptr`, če smo na koncu.
-   Vsako dodelitev z `new` spremlja sprostitev z `delete` v funkciji `pocisti`.

## Naloge

1. Ustvari `struct Pravokotnik` s polji `sirina` in `visina` ter funkcijo, ki izračuna ploščino. V `main` ustvari primer in izpiši ploščino.
2. Napiši funkcijo `premakni(Tocka& t, int dx, int dy)`, ki točko premakne za podane razlike. Preizkusi jo na točki `(0,0)`.
