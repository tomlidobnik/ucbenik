# Podatkovni tipi in spremenljivke

Podatkovni tip pove prevajalniku, kakšne vrednosti shranjujemo in katera dejanja so dovoljena. Osnovni tipi v C++ zajemajo cela in decimalna števila, znake, logične vrednosti ter nize.

## Osnovni tipi

| Tip            | Primer                       | Opis                                                         |
| -------------- | ---------------------------- | ------------------------------------------------------------ |
| `int`          | `int starost = 25;`          | Celo število s pozitivnim ali negativnim predznakom          |
| `long`         | `long prebivalci = 2100000;` | Celo število z daljšim obsegom od `int`                      |
| `unsigned int` | `unsigned int stKart = 120;` | Celo število brez negativnih vrednosti                       |
| `double`       | `double temperatura = 36.6;` | Decimalno število z dvojno natančnostjo                      |
| `float`        | `float casSekund = 12.5f;`   | Decimalno število z enojno natančnostjo                      |
| `char`         | `char znak = 'A';`           | Posamezen znak, zapisan v enojnih narekovajih                |
| `bool`         | `bool uspeh = true;`         | Logična vrednost `true` ali `false`                          |
| `std::string`  | `std::string ime = "Ana";`   | Niz znakov; potrebujemo zaglavje `<string>` in zapis `std::` |

Na večini sodobnih 64-bitnih sistemov `int` in `float` zasedeta 32 bitov (4 bajte), `long` in `double` pa 64 bitov (8 bajtov). Pri preprostih nalogah in manjših številih razlika običajno ne vpliva na rezultat; pomembna postane šele, ko potrebujemo zelo velike vrednosti ali visoko natančnost.

## Spremenljivke

Spremenljivka je imenovana shramba vrednosti. Deklaracija pove tip, ime in, po želji, začetno vrednost.

```cpp
int steviloTock = 5;      // tip int, ime steviloTock, začetna vrednost 5
double povprecje = 8.75;  // tip double, ime povprecje
```

-   Vsaka spremenljivka ima tip, ime (brez presledkov, začnemo z črko ali `_`) in vrednost.
-   Dobra praksa je, da ime opiše namen (`steviloTock`, `povprecje` ...), kar olajša branje kode.
-   Če spremenljivke ne inicializiramo, lahko vsebuje naključne podatke; raje jo nastavimo na znano vrednost takoj ob deklaraciji.

### Konstante (`const`)

Če pred tip postavimo ključno besedo `const`, vrednosti po inicializaciji ne smemo več spreminjati.

```cpp
const double PI = 3.1415926535;
const int NAJVEC_POSKUSOV = 3;

PI = 2.0;        // napaka: const vrednosti ne moremo spremeniti
```

-   `const` zagotovi, da pomembna vrednost ostane nespremenjena, in pomaga prevajalniku ujeti neželene spremembe.
-   Ime konstante pogosto pišemo z velikimi črkami in podčrtaji (`MAX_HITROST`), kar jasno pokaže, da gre za nespremenljivo vrednost.
-   `const` lahko dodamo tudi kazalcem in referencam; o tem več v poglavjih o kazalcih in funkcijah.

V naslednjem programu morda še ne boste razumeli uporabe `std::cout`, operatorja `<<` in `std::endl`. To podrobneje razložimo v naslednjem poglavju; za zdaj si zapomnite, da s tem zapisom pošljemo besedilo ali vrednost na standardni izhod (konzolo).

```cpp
#include <iostream>
#include <string>

int main() {
    unsigned int letoRojstva = 2000; // uporabimo unsigned, saj leto rojstva ne more biti negativno
    double povprecje = 8.75;
    char ocena = 'A';
    bool opravljen = true;
    std::string ime = "Tina";

    std::cout << "Pozdravljen, " << ime << "!" << std::endl;
    std::cout << "Letnica rojstva: " << letoRojstva << std::endl;
    std::cout << "Povprečje ocen: " << povprecje << std::endl;
    std::cout << "Ocena: " << ocena << std::endl;
    std::cout << "Status: " << opravljen << std::endl; // Izpiše 1 za true
    return 0;
}
```

-   `#include <string>` omogoča uporabo tipa `std::string`.
-   `std::cout` prihaja iz imenskega prostora `std`, zato pred imenom dodamo `std::`.
-   Tip `bool` interno shrani 0 za `false`, kakršna koli druga celoštevilska vrednost pa se pri pretvorbi spremeni v `true` (običajno 1); pri izpisu se zato `true` prikaže kot 1 in `false` kot 0.
-   Nizi uporabljajo dvojne narekovaje, znaki pa enojne.

## Pretvorbe

-   Pretvorba iz `int` v `double` se zgodi samodejno, ker `double` lahko shrani celo število.
-   Pretvorba iz `double` v `int` odstrani decimalni del (uporabi se odrezava).
-   `static_cast<ciljni_tip>(vrednost)` je priporočeni način za jasno pretvorbo.

```cpp
int x = 5;
double y = x;             // y postane 5.0
int z = static_cast<int>(3.9); // z postane 3
```

V zadnji vrstici poskrbimo za eksplicitno pretvorbo, da je bralcu jasno, da decimalni del izgine.
