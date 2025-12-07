# Krmilni stavki

Krmilni stavki uravnavajo potek izvajanja programa. Z njimi odločimo, kateri deli kode se bodo izvedli na podlagi pogojev. Za ustvarjanje pogojev potrebujete znanje logičnih operatorjev iz prejšnjega poglavja.

## `if` in `else`

`if` preveri pogoj. Če je pogoj resničen, se izvede blok znotraj oklepajev. `else` se izvede, ko pogoj ni izpolnjen.

```cpp
int starost = 17;

if (starost >= 18) {
    std::cout << "Dobrodošel med odrasle" << std::endl;
} else {
    std::cout << "Še malo potrpi" << std::endl;
}
```

-   Pogoj znotraj `if` mora vrniti logično vrednost (`true` ali `false`).
-   V vsakem bloku lahko napišemo poljubno število stavkov; blok se zaključi z `}`.

## Verižno `else if`

Ko imamo več možnosti, uporabimo `else if`.

```cpp
int tocke = 68;

if (tocke >= 90) {
    std::cout << "Ocena 5" << std::endl;
} else if (tocke >= 75) {
    std::cout << "Ocena 4" << std::endl;
} else if (tocke >= 60) {
    std::cout << "Ocena 3" << std::endl;
} else if (tocke >= 50) {
    std::cout << "Ocena 2" << std::endl;
} else {
    std::cout << "Ocena 1" << std::endl;
}
```

-   Več zaporednih `else if` veji poskrbi, da se izvede samo prvi ujemajoči pogoj.
-   Pogoji so urejeni od najzahtevnejšega proti najmilejšemu; če bi najprej preverili `>= 50`, se preostali pogoji ne bi nikoli izvedli.

## `switch`

`switch` izbere vejo na podlagi vrednosti izrazov tipa `int`, `char` ali `enum`. Uporabljamo `break`, da preprečimo padanje v naslednje `case`.

```cpp
char izbira = 'b';

switch (izbira) {
    case 'a':
        std::cout << "Izbral si možnost A" << std::endl;
        break;
    case 'b':
        std::cout << "Izbral si možnost B" << std::endl;
        break;
    default:
        std::cout << "Neznana možnost" << std::endl;
        break;
}
```

-   Vsak `case` predstavlja eno možnost; `default` se izvede, ko ni zadet noben drug primer.
-   Če izpustimo `break`, se izvajanje nadaljuje v naslednji `case` (t. i. »fall-through«).

## Vgnezdeni pogoji

Pogosto kombiniramo pogoje v blokih znotraj drugih blokov. Kratek komentar pomaga ohraniti jasnost, ko je pogojev več.

```cpp
int starost = 20;
bool imaKarto = false;

if (starost >= 18) {
    if (imaKarto) {
        std::cout << "Lahko vstopiš." << std::endl;
    } else {
        std::cout << "Kupite karto na blagajni." << std::endl;
    }
} else {
    std::cout << "Vstop ni dovoljen." << std::endl;
}
```

-   Vgnezdeni `if` se izvede samo, če je zunanji pogoj izpolnjen.
-   Za boljšo berljivost lahko pogoj znotraj bloka preselimo v ločeno funkcijo (npr. `imaDostop()`), ko logika postane zahtevnejša.

## Naloge

1. Napiši program, ki prebere celo število in izpiše, ali je pozitivno, negativno ali enako nič.
2. Napiši program, ki prebere celo število in izpiše, ali je število sodo.
3. Napiši program, ki prebere celo število in izpiše, ali je večje od 50. Če je, naj dodatno preveri, ali je deljivo s 5, in to tudi izpiše. Pazite, kako gnezdite `if` stavke.
