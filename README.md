# C++ Učbenik (mdBook)

Repozitorij vsebuje začetniški učbenik za C++, pripravljen z orodjem [mdBook](https://rust-lang.github.io/mdBook/). Namenjen je študentom, ki se prvič srečajo s temeljnimi koncepti jezika in želijo skozi kratke razlage, primeri kode ter vaje zgraditi osnovno razumevanje.

## Vsebina

-   `src/` – izvorne Markdown datoteke posameznih poglavij (podatkovni tipi, operatorji, zanke, funkcije ...).
-   `book/` – generirana HTML knjiga (nastane po ukazu `mdbook build`).
-   `res/` – dodatna gradiva, ki jih poglavja omenjajo.
-   `book.toml` – konfiguracija projekta.

## Prerequisites

-   Rust toolchain z nameščenim `cargo`
-   `mdbook` (namesti se z `cargo install mdbook`)

## Uporaba

1. Namesti `mdbook`, če ga še nimaš:
    ```bash
    cargo install mdbook
    ```
2. Ustvari knjigo v HTML obliki:
    ```bash
    mdbook build
    ```
    Ustvarjeni rezultati se nahajajo v mapi `book/`.
3. Med razvojem lahko zaženeš lokalni strežnik:
    ```bash
    mdbook serve --open
    ```

## Prispevki

Če opaziš slovnično napako ali idejo za dodatno razlago, odpri Issue ali Pull Request. Pri razlagah ohranjaj preprost jezik, ciljna skupina so popolni začetniki.
