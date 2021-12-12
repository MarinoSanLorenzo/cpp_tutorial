#include <iostream>
    #include "Sales_item.h"

    int main(){

        int nb_transactions;
        std::cout <<  "Enter the number of transactions!" << std::endl;
        std:: cin >> nb_transactions;

        for (int i=0; i<=nb_transactions ; ++i) {
            Sales_item  item;
            std::cin >> item;
            std::cout << item << std::endl;
        }





        return 0;
    }