## Uvod

Ta učbenik je namenjen študentom in študentkam, ki se prvič učijo programski jezik C++. Predstavlja osnovne pojme jezika, razlaga namen posameznih delov kode in ponuja spremno razlago.

Zelo priporočljivo je sprotno preizkušanje programov, najlažje na spletni strani [https://www.online-cpp.com](https://www.online-cpp.com). Vsakič, ko vidite kodo v učbeniku, jo kopirajte in zaženite, nato pa opazujte izhod programa. Spreminjajte parametre, vrednosti ali dodajajte svojo kodo, da boste bolje razumeli delovanje programa.

Za reševanje nalog iz učbenika ne uporabljajte orodij, kot je chatGPT. Samostojno reševanje je najboljši način za učenje. Če se pri kakšni nalogi zataknete, najdete rešitve in usmeritve v učbeniku.

Gradivo je pripraviljeno s strani Tutorjev FERI-ja. Če opazite, da je kakšen pojem nejasen ali kaj manjka, kontaktirajte tutorja za programiranje, da se vsebina lahko posodobil.

## Struktura C++ programa

Vsak C++ program potrebuje funkcijo `main`. Ta funkcija je začetna točka izvajanja. Pogosto boste uporabili knjižnico `<iostream>`, ki omogoča `std::cout` in `std::cin`; podrobnejšo razlago boste našli v poglavju **Vhod, izhod in imenski prostori**.

```cpp
#include <iostream>

int main() {
    std::cout << "Pozdravljen, svet!" << std::endl;
    return 0;
}
```

-   `#include <iostream>` vključuje zaglavje za standardne vhodno-izhodne tokove.
-   `std::cout` izpiše besedilo na zaslon; `std::endl` doda prelom vrstice in izprazni izhodni medpomnilnik.
-   `return 0;` označi, da se je program končal brez napak.

## Prevajanje in zagon

1. Kodo zapišemo v datoteko s končnico `.cpp`.
2. Prevajalnik (npr. `g++`) kodo prevede v izvedljiv program.
3. Nastali program zaženemo in opazujemo rezultat.

Primer zaporedja ukazov v terminalu:

```
g++ pozdrav.cpp -o pozdrav
./pozdrav
```

Še vedno lahko uporabite spletno stran [https://www.online-cpp.com](https://www.online-cpp.com), kot je omenjeno zgoraj.
