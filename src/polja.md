# Polja

Polje shrani zbirko vrednosti enakega tipa v zaporednih pomnilniških mestih. Uporabimo ga, ko vnaprej vemo velikost zbirke.

## Statična polja

```cpp
#include <iostream>

int main() {
    int ocene[5] = {5, 4, 5, 3, 4};

    for (int i = 0; i < 5; ++i) {
        std::cout << "Ocena " << i << ": " << ocene[i] << std::endl;
    }
    return 0;
}
```

-   Indeksiranje se začne z 0.
-   Velikost polja mora biti znana ob prevajanju.
-   Če deklariramo polje `int ocene[5];` brez vrednosti, vsebuje nedoločene podatke.

## Inicializacija in privzete vrednosti

Če polje inicializiramo delno, preostanek zapolni `0` (za številske tipe).

```cpp
int stevila[4] = {1, 2}; // Ostala elementa postaneta 0
```

-   Vrednosti, ki jih ne navedemo, se zaradi standarda C++ samodejno nastavijo na nič.

## Dostop do elementov

Elemente polja beremo in spreminjamo z oglatimi oklepaji, pri čemer indeks začnemo šteti pri 0.

```cpp
int vrednosti[3] = {4, 6, 8};
vrednosti[0] = 10;           // prvi element postane 10
int zadnji = vrednosti[2];   // preberemo tretji element
```

-   Pazimo, da ne dostopamo izven meja (`vrednosti[3]` bi bil neveljaven).
-   Dolžino polja običajno hranimo v dodatni spremenljivki ali pa jo poznamo iz konteksta.

## Dvodimenzionalna polja

Polje lahko predstavlja tudi mrežo. Takrat uporabimo dve velikosti: vrstice in stolpce.

```cpp
int mreza[3][4]; // 3 vrstice, 4 stolpci

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
        mreza[i][j] = i + j; // dostop do elementa na mestu (i, j)
    }
}
```

-   Prvi indeks (i) izbere vrstico, drugi (j) stolpec.
-   Notranja zanka se običajno sprehodi čez stolpce, zunanja pa po vrsticah.
-   Za izpis dodamo `std::cout << mreza[i][j] << " ";` v notranjo zanko in `std::cout << std::endl;` po njej, da dobimo lepo oblikovane vrstice.

## Nizi znakov in `\0`

Znaki (`char`) se lahko hranijo v polju. Polje znakov je niz.

```cpp
char pozdrav[6] = {'Z', 'd', 'r', 'a', 'v', '\0'};
// enakovredno: char pozdrav[6] = "Zdrav";
```

-   Prevajalnik sam doda `\0`, če uporabimo dvojne narekovaje; vseeno moramo rezervirati prostor zanj.
-   Če `\0` manjka, funkcije, kot je `std::cout << pozdrav`, ne vedo, kje se niz konča.

## Naloge

1. Napiši program, ki prebere pet celih števil v polje in izpiše najvišjo ter najnižjo vrednost.
2. Ustvari funkcijo `int vsotaTretin(const int polje[], int velikost)`, ki sešteje vsak tretji element (indeksi 0, 3, 6 ...). Funkcijo preizkusi na nekaj primerih.
3. Ustvari polje velikosti `10x10`. Napolni ga tako, da je element `[i][j]` enak `j` (torej števila od 0 do 9). Nato izračunaj vsoto glavne diagonale (`[0][0]`, `[1][1]` ...).
4. Napiši program, ki prebere število vrstic in stolpcev, ustvari 2D polje ter vsak element zapolni z znakom `*`. Na koncu polje izpiši.
5. Dopolni rešitev prejšnje naloge tako, da lahko uporabnik izbere simbol, s katerim se polje polni.
