#include <iostream>

int main()
{
    for (int vrstica = 3; vrstica >= 1; --vrstica)
    {
        for (int stolpec = 0; stolpec < vrstica; ++stolpec)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    return 0;
}
