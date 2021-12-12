#include <iostream>

int main()
{

    std::cout << "Kto kocha Niunię?" << std::endl;
    int v1;
    std::cin >> v1;
    std::cout << "Niuniu bardzo kocha Niunię?" << std::endl;
    std::cout << "Ile razy musi Niuniu mowić,ze kocha Niunię?" <<std::endl;
    int raz;
    std::cin >> raz;
    int val = 0;
    while (val < raz) {
        std::cout << "Niuniu bardzo kocha Kicię!" << std::endl;
        ++val;
    }

    return 0;

}