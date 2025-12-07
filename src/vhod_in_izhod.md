# Vhod, izhod in imenski prostori

V tem poglavju spoznamo knjižnico `<iostream>`, ki omogoča izpis in branje podatkov prek standardnih tokov, ter koncept imenskih prostorov, s katerim se izognemo poimenovalnim konfliktom.

## Standardni tokovi

Knjižnica `<iostream>` definira tri najpogosteje uporabljene tokove:

-   `std::cin` – standardni vhod (tipkovnica).
-   `std::cout` – standardni izhod (konzola).
-   `std::cerr` – standardni izhod za napake.

Za nas bosta pomembna `std::cin` in `std::cout`.

```cpp
#include <iostream>

int main() {
    std::cout << "Vnesi celo število: ";

    int stevilo = 0;
    std::cin >> stevilo; // Branje s tipkovnice

    std::cout << "Vpisal si: " << stevilo << std::endl;
    return 0;
}
```

-   Operator `<<` (inserter) podatke iz programa pošlje v tok.
-   Operator `>>` (extractor) podatke prebere iz toka v spremenljivko.
-   `std::endl` doda prelom vrstice in izprazni izhodni medpomnilnik.

## Izbira med `std::endl` in `"\n"`

-   `std::endl` doda prelom vrstice in izprazni izhodni medpomnilnik. Uporabimo ga, ko želimo zagotovljen takojšen izpis.
-   Niz `"\n"` je hitrejši, ker ne izprazni medpomnilnika; primeren je za običajen izpis v zankah.
-   Pri preprostih programih razlika ni opazna.

```cpp
std::cout << "Pozdrav" << '\n';
std::cout << "Takojšen izpis" << std::endl;
```

## Branje več vrednosti

Operator `>>` preskoči začetne presledke in razčleni vrednosti glede na vrsto spremenljivke.

```cpp
std::string ime;
int starost = 0;
double visina = 0.0;

std::cin >> ime >> starost >> visina;
```

-   `std::cin` ob prvi napaki preneha brati; preostale spremenljivke ostanejo nespremenjene.
-   Če vnos ni pravilne oblike, se tok označi z napako (`std::cin.fail()` vrne `true`). Takrat moramo napako počistiti s `std::cin.clear()` in odstraniti neveljaven vnos, na primer s `std::cin.ignore()`.

## Imenski prostori

Vsa imena iz standardne knjižnice (npr. `cout`, `string`, `cin`) živijo v imenskem prostoru `std`. V praksi imamo dve možnosti:

-   Vsakič napišemo `std::cout`, `std::string` in podobno.
-   Na začetek programa dodamo vrstico `using namespace std;` in nato pišemo samo `cout`, `string` ...

```cpp
#include <iostream>

using namespace std; // prihranimo ponavljanje std::

int main() {
    cout << "Pozdrav" << endl;
    return 0;
}
```

Za male programe je druga možnost priročna. Ko postanejo projekti večji, se pogosto vrnemo k zapisom `std::`, ker tako takoj vidimo, da uporabljamo standardno knjižnico.

## Naloge

1. Napiši program, ki izpiše »Pozdravljen svet« trikrat, vsakič v svoji vrstici.
   Pričakovani rezultat:
    ```
    Pozdravljen svet
    Pozdravljen svet
    Pozdravljen svet
    ```
2. Napiši program, ki uporabnika najprej prosi za celo število, nato za decimalno število, na koncu pa izpiše oba vnosa.
   Pričakovani rezultat (primer):
    ```
    Celo število: 5
    Decimalno število: 3.2
    Vpisali ste številki 5 in 3.2
    ```
    V prvih dveh vrsticah uporabnik vnese vrednosti, tretja vrstica je izpis programa.

Poskusite tudi z drugimi tipi podatkov, spreminjajte vnesene vrednosti in opazujte, kako se program obnaša.
