# Zanke

Zanke ponavljajo blok kode, dokler je izpolnjen določen pogoj. To je uporabno, kadar želimo določen del kode izvesti večkrat.

## `for`

`for` zanka združi inicializacijo, pogoj in posodobitev v eni vrstici.

```cpp
for (int i = 0; i < 5; ++i) {
    std::cout << "Ponovitev: " << i << std::endl;
}
```

-   Spremenljivko `i` ustvarimo znotraj zanke; po izhodu iz zanke ni več dostopna.
-   Imamo pogoj `i < 5`, zanka se bo izvajala dokler to ne bo več res.
-   Posodobitev `i++` se izvede na koncu vsake ponovitve.

## `while`

`while` najprej preveri pogoj in nato izvede telo zanke.

```cpp
int stevec = 0;

while (stevec < 3) {
    std::cout << "Števec: " << stevec << std::endl;
    stevec++;
}
```

-   Če je pogoj že na začetku neresničen, se telo sploh ne izvede.
-   Povečamo `stevec`, sicer bi zanka tekla neskončno dolgo.

## `do-while`

`do-while` najprej izvede telo in šele nato preveri pogoj. Zato se telo vedno izvede vsaj enkrat.

```cpp
int poskus = 0;
do {
    std::cout << "Poskus št. " << poskus << std::endl;
    poskus++;
} while (poskus < 2);
```

-   Pogoj je na koncu, zato se rezultat izpiše vsaj enkrat, tudi če je `poskus < 2` že sprva neresničen.

## Gnezdene zanke

Zanko lahko vstavimo v telo druge zanke. Zunanja zanka skrbi za vrstice, notranja pa za stolpce ali ponovitve znotraj vsake vrstice.

```cpp
for (int vrstica = 0; vrstica < 3; vrstica++) {
    for (int stolpec = 0; stolpec < 3; stolpec++) {
        std::cout << "(" << vrstica << "," << stolpec << ") ";
    }
    std::cout << std::endl; // prelom vrstice po koncu notranje zanke
}
```

-   Spremenljivke `vrstica` in `stolpec` sta neodvisni; vsaka se povečuje v svoji zanki.
-   Notranja zanka se za vsako vrednost `vrstica` izvede v celoti.
-   Prelom vrstice postavimo v zunanjo zanko, da dobimo urejen izpis.

## Prekinitve zanke

-   `break` takoj konča zanko.
-   `continue` preskoči preostanek trenutne iteracije.

```cpp
for (int i = 0; i < 5; ++i) {
    if (i == 2) {
        continue; // Preskoči 2
    }
    if (i == 4) {
        break; // Zaključi zanko
    }
    std::cout << i << std::endl;
}
```

-   `continue` preskoči preostalo telo trenutne ponovitve in nadaljuje z naslednjo.
-   `break` zapusti zanko ne glede na to, ali je pogoj še vedno izpolnjen.

## Naloge

1. Napiši program, ki izpiše številke od 1 do 20 ter označi vsak tretji element z zvezdico (npr. `3*`).
2. Napiši program, ki z `while` zahteva vnos pozitivnega števila. Če uporabnik vnese negativno število, ga program ponovno vpraša.
3. Napiši program, ki z `do-while` izpiše preprost menijski sistem (npr. “1. možnost”, “2. možnost”, “3. možnost”) in uporabnika sprašuje za izbiro, dokler ne vnese `0`.
4. Napiši program, ki izračuna vsoto prvih `n` naravnih števil, kjer `n` vnese uporabnik.
5. Napiši program, ki z dvojno zanko izpiše naslednje vzorce:

```
***
**
*
```

```
***
***
***
```

```
**
***
****
```

```
1
12
123
```
