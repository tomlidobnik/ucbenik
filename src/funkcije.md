# Funkcije

Funkcija je poimenovan blok kode, ki opravi določeno nalogo. Z uporabo funkcij razbijemo program na manjše, lažje razumljive dele in se izognemo ponavljanju kode.

## Definicija in klic

```cpp
#include <iostream>

int sestej(int a, int b) {
    return a + b;
}

int main() {
    int rezultat = sestej(3, 4);
    std::cout << "Rezultat: " << rezultat << std::endl;
    return 0;
}
```

Funkcija `sestej` sprejme dva parametra in vrne njuno vsoto. Klic v `main` uporabi funkcijo kot del izraza.

-   Vrednosti 3 in 4 se kopirajo v parametra `a` in `b`.
-   `return` zaključi funkcijo in vrne rezultat nazaj klicatelju.

## Parametri in vrednosti

-   Parametri so lokalni znotraj funkcije.
-   Funkcija lahko sprejme več parametrov.
-   Tip vrnjene vrednosti se navede pred imenom funkcije.

## Vračanje `void`

Funkcija s tipom `void` ne vrne vrednosti, temveč izvaja dejanje.

```cpp
void pozdravi() {
    std::cout << "Pozdravljeni!" << std::endl;
}
```

## Prenos po vrednosti in referenci

Privzeto se parametri kopirajo (prenos po vrednosti). Z referencami (`&`) delimo isti objekt.

```cpp
#include <iostream>

void povecaj(int& x) {
    x++;
}

void povecaj_kopija(int x) {
    x++;
}

int main() {
    int stevilo = 5;
    povecaj_kopija(stevilo);
    // Izpiše 5, saj smo kopirali vrednost 5 v funkcijo,
    // v funkciji smo spremenili vrednost kopije, ta se ni shranila
    std::cout << stevilo << std::endl;
    povecaj(stevilo);
    // Izpiše 6, saj smo poslali referenco,
    // spremembe znotraj funkcije se shranijo, ker ne delamo s kopijami
    std::cout << stevilo << std::endl;
}
```

-   Referenca `int& x` kaže na isto spremenljivko kot `stevilo`. Spremembe v funkciji se odrazijo pri klicatelju.

## Naloge

1. Napiši funkcijo, ki ima tri celoštevilske parametre `x`, `y` in `z`. Funkcija naj vrne največjo izmed števil. V `main` jo preizkusi z različnimi kombinacijami.
2. Ustvari funkcijo `podvoji`, ki pomnoži število s številom 2, če je vhodno število deljivo s 3 (funkcija bo tipa `void` in dobi kot vhod število po referenci). V `main` jo preizkusi ter preveri, da se spremembe shranijo.
3. Napiši funkcijo `jePrastevilo`, ki kot vhod dobi celo število in vrne, ali je število praštevilo.
