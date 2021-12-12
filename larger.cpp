#include <iostream>

int main()
    {   
        std:: cout << "Enter two numbers:" << std::endl;
        int v1, v2;
        std::cin >> v1 >> v2;
        if ( v1 > v2) {
            std::cout << "The number " << v2 << " is strictly lower than " << v1 << std::endl;
        } else if (v1 < v2) {
            std::cout << "The number " << v1 << " is strictly lower than " << v2 << std::endl;

        } else if ( v1==v2) {
            std::cout << "The number " << v1 << " is equal to " << v2 << std::endl;
        }

    return 0;
    }