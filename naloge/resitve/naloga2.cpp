#include <iostream>

int main()
{
    int podatki[9]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int vsota = 0;

    for (int i = 0; i < 9; i += 3)
    {
        vsota += podatki[i];
    }

    std::cout << "Vsota vsakih tretjih elementov: " << vsota << '\n';
    return 0;
}
