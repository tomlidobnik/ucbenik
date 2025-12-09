set shell := ["sh", "-c"]
set dotenv-load := false

run n:
    set -e
    g++ -std=c++17 -O2 -Wall -Wextra "naloge/resitve/naloga{{n}}.cpp" -o "/tmp/naloga{{n}}"
    "/tmp/naloga{{n}}"

list:
    @ls naloge/resitve | sed 's/.cpp$//' | sed 's/^/ - /'

demo:
    set -e
    g++ -std=c++17 -O2 -Wall -Wextra "naloge/demo.cpp" -o "/tmp/demo"
    "/tmp/demo"