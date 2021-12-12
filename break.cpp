#include <iostream>

int main()
{  
    int nb_inputs= 0, value;
    while (std::cin >> value) {
        std::cout << "You entered the value: " << value << std::endl;
        ++nb_inputs;
        if (nb_inputs >=5) {
            break;
        }
    }


    return 0;
}