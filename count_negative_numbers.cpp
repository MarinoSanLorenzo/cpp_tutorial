#include <iostream>

int main()

    {
        int nb_inputs_max;
        int nb_negative_numbers = 0;
        int value;
        int nb_inputs = 1;
    
        std::cout << "Enter the number of inputs!" << std::endl;
        std::cin >> nb_inputs_max;
        while (std::cin >> value) {
            if (value <0) {
                ++nb_negative_numbers;
            } 
            if (nb_inputs == nb_inputs_max) {
                break;
            }
            ++nb_inputs;
        }

        

/*      char suffix; 

        if (nb_negative_numbers==1) {
            suffix = "";
        } else if (nb_negative_numbers > 1) {
            suffix = "s";
        }
*/
        std::cout << "You entered " << nb_negative_numbers << " negative numbers" << std::endl;


        return 0;
    }