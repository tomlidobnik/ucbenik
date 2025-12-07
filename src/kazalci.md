# Kazalci

Kazalec (pointer) hrani pomnilniški naslov vrednosti. Omogoča neposreden dostop do podatkov na določenem mestu v pomnilniku, kar je močno orodje, a zahteva natančnost.

## Osnovna sintaksa

```cpp
int vrednost = 42;
int* kazalec = &vrednost; // kazalec hrani naslov spremenljivke

std::cout << "Vrednost: " << vrednost << std::endl;
std::cout << "Naslov: " << kazalec << std::endl;
std::cout << "Dostop preko kazalca: " << *kazalec << std::endl;
```

-   Operator `&` vrne naslov spremenljivke, operator `*` pa dereferencira kazalec (dostop do vsebine na naslovu).
-   Naslov, izpisan na zaslon, se običajno prikaže v šestnajstiškem zapisu.

## Kazalci in funkcije

Kazalce pogosto uporabimo, ko želimo, da funkcija spremeni podatek.

```cpp
void nastaviNaNic(int* ptr) {
    if (ptr != nullptr) {
        *ptr = 0;
    }
}

int main() {
    int stevilo = 7;
    nastaviNaNic(&stevilo);
    std::cout << "Število: " << stevilo << std::endl; // Izpiše 0
}
```

`nullptr` predstavlja prazen kazalec, ki ne kaže nikamor.

-   Preden dereferenčiramo kazalec (`*ptr`), preverimo, ali ni `nullptr`, da se izognemo nedoločenemu obnašanju.
-   Funkcija prejme naslov spremenljivke z uporabo operatorja `&`.

## Dinamična dodelitev

`new` rezervira prostor v pomnilniku, `delete` pa ga vrne sistemu. Za vsak `new` mora obstajati ustrezen `delete`.

```cpp
int* podatki = new int[3];
podatki[0] = 1;
podatki[1] = 2;
podatki[2] = 3;

for (int i = 0; i < 3; i++) {
    std::cout << podatki[i] << std::endl;
}

delete[] podatki; // Sprosti polje
```

-   `new int[3]` ustvari dinamično polje; uporabljamo ga, ko velikost poznamo šele med izvajanjem.
-   `delete[]` mora imeti enake oglate oklepaje kot `new[]`, sicer sproščanje ni pravilno.

Pri delu z dinamičnim pomnilnikom pazimo na uhajanje pomnilnika in dostop do že sproščenih podatkov. V sodobnem C++ raje uporabljamo pametne kazalce (`std::unique_ptr`, `std::shared_ptr`), ki avtomatizirajo sproščanje.

## Kazalci in polja

Ime polja se v izrazih razstavi v kazalec na prvi element. To pojasni, zakaj `sizeof` na kazalcu ne vrne velikosti polja.

```cpp
int vrednosti[3] = {10, 20, 30};
int* p = vrednosti; // enakovredno &vrednosti[0]

std::cout << *(p + 1) << std::endl; // Izpiše 20
```

-   Izraz `p + 1` premakne kazalec za en element naprej (upošteva velikost tipa `int`).
-   `*(p + i)` je enakovredno `p[i]`.

## Naloge

1. Napiši program, ki uporablja kazalec za zamenjavo vrednosti dveh spremenljivk.
2. Ustvari funkcijo, ki prejme kazalec na `int` in ga, če ni `nullptr`, poveča za 10.
3. Napiši program, ki dinamično ustvari polje velikosti `n`, ga napolni s kvadrati indeksov in na koncu pravilno sprosti pomnilnik.
