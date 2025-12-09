# Naloge in primeri

Ta mapa vsebuje dodatne naloge s kratkimi primeri kode. Za hitri zagon so priložene referenčne rešitve in `Justfile`, ki omogoča ukaz `just run <n>`.

## Kako zagnati

1. Namesti `just`, če ga še nimaš (macOS Homebrew):
    ```sh
    brew install just
    ```
2. V korenu repozitorija zaženi izbrano nalogo:
    ```sh
    just run 1
    ```
    Zamenjaj `1` z želeno številko naloge.

## Naloge

1. **For zanka in potence**: Izpiši števila 1–5 skupaj z njihovimi kvadrati. Uporabi `for` zanko in sproti oblikuj izpis.
2. **Vsota vsakih tretjih elementov**: V polju celih števil seštej elemente na indeksih 0, 3, 6, ... in izpiši vsoto.
3. **Vzorec z gnezdenimi zankami**: Z dvema gnezdenima zankama izpiši trikotnik:
    ```
    ***
    **
    *
    ```
4. **Matrika 10x10 in diagonala**: Ustvari polje 10×10, kjer je element `[i][j] = j`. Nato izračunaj in izpiši vsoto glavne diagonale.

## Rešitve

Referenčne rešitve so v mapi `resitve/` kot samostojne `*.cpp` datoteke. Za ogled rešitve brez zagona odpri ustrezno datoteko, npr. `resitve/naloga1.cpp`.
