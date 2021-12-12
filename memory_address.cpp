#include <iostream>

void print_memory_address(std::string variable);

int main(){


    for (int i=0; i<=10; i++) {
        std::string name = "Marino" + std::to_string(i);
        print_memory_address(name);
    }



    return 0;
}

void print_memory_address(std::string variable) {
    std::cout << "The memory address of the variable " << variable << " is " << &variable << std::endl; 

}
