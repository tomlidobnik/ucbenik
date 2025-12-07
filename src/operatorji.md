# Operatorji

Operatorji v C++ opisujejo, kako spremenljivke in vrednosti sodelujejo v izrazih. Poznavanje aritmetičnih, prireditvenih, primerjalnih in logičnih operatorjev je ključno za pisanje uporabnih programov.

## Aritmetični operatorji

| Operator | Opis                 | Primer                                      |
| -------- | -------------------- | ------------------------------------------- |
| `+`      | Seštevanje           | `a + b`                                     |
| `-`      | Odštevanje           | `a - b`                                     |
| `*`      | Množenje             | `a * b`                                     |
| `/`      | Deljenje             | `a / b` (za cela števila poteka z odrezavo) |
| `%`      | Ostanki pri deljenju | `a % b` (deluje samo na celih številih)     |
| `++`     | Povečaj za 1         | `++a` ali `a++`                             |
| `--`     | Zmanjšaj za 1        | `--a` ali `a--`                             |

Pri `++` in `--` je razlika med predpono in pripono: `++a` poveča `a` in vrne novo vrednost, `a++` pa vrne staro vrednost in šele nato poveča spremenljivko. V enostavnih zankah, kjer rezultat ne beremo, sta obliki enakovredni.

```cpp
int a = 10;
int b = 3;
std::cout << a / b << std::endl; // Izpiše 3, ker gre za celo deljenje
std::cout << a % b << std::endl; // Izpiše 1
a++; // zdaj je a enak 11
```

-   Pri celih številih deljenje vedno odreže decimalni del; za natančnejši izračun uporabimo `double`.
-   Operator `%` vrne ostanek pri celem deljenju, to bo uporabno za preverjanje ali je število deljivo z drugim številom ter ali je sodo.

## Prireditveni operatorji

`=` prisodi vrednost spremenljivki. Razširjeni operatorji (npr. `+=`) združijo prirejanje z aritmetiko.

```cpp
int x = 5;
x += 2; // je enako kot x = x + 2;
x *= 3; // je enako kot x = x * 3;
```

-   Razširjeni operatorji prihranijo ponavljanje spremenljivke na levi strani (`x = x + 2` postane `x += 2`).
-   Enak princip deluje tudi za `-=`, `*=`, `/=` in `%=`.

## Primerjalni in logični operatorji

| Operator             | Opis                  |
| -------------------- | --------------------- |
| `==`                 | Enako                 |
| `!=`                 | Ni enako              |
| `<`, `>`, `<=`, `>=` | Relacijski operatorji |
| `&&`                 | Logični IN            |
| `\|\|`               | Logični ALI           |
| `!`                  | Logična negacija      |

Več o pomenih [logičnih operatorjev](https://en.wikipedia.org/wiki/Truth_table).

```cpp
int starost = 20;
bool jePolnoleten = starost >= 18;
bool imaDovoljenje = true;
if (jePolnoleten && imaDovoljenje) {
    std::cout << "Dostop dovoljen" << std::endl;
} else {
    std::cout << "Dostop zavrnjen" << std::endl;
}

```

-   Pogoji v `if` primerjajo vrednosti; rezultat je logičen tip `bool`.
-   Za preverjanje več pogojev kombiniramo operatorja `&&` (IN) in `||` (ALI).
-   Uporaba oklepajev okoli primerjav izboljša berljivost, čeprav imajo `>=` in `&&` različne prioritete.

## Presečišče aritmetike in logike

```cpp
int tocke = 75;
bool opravljen = (tocke >= 50) && (tocke <= 100);
bool odlicen = tocke > 90 || tocke == 90;
```

-   Oklepaji jasno pokažejo, katera primerjava se izvede najprej, četudi operatorja `>=` in `&&` imata različni prioriteti.
-   V izrazu `tocke > 90 || tocke == 90` uporabimo `||`, ker nas zanima katera koli od dveh možnosti.

Pazimo, da kombinacija več operatorjev upošteva prioriteto; oklepaji skoraj vedno izboljšajo berljivost.
