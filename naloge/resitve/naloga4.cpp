#include <iostream>

int main()
{
    const int vrstice = 10;
    const int stolpci = 10;
    int matrika[vrstice][stolpci];

    for (int i = 0; i < vrstice; i++)
    {
        for (int j = 0; j < stolpci; j++)
        {
            matrika[i][j] = j;
        }
    }

    int vsotaDiagonale = 0;
    for (int i = 0; i < vrstice; i++)
    {
        vsotaDiagonale += matrika[i][i];
    }

    std::cout << "Vsota glavne diagonale: " << vsotaDiagonale << '\n';
    return 0;
}
