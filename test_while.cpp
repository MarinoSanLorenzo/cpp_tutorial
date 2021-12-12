#include <iostream>

int main()
{   
    std::cout << "Enter a limit range:" << std::endl;
    int limit_range;
    std::cin >> limit_range;
    int sum = 0, val=1;
    while(val<=limit_range) {
        sum+=val;
        ++val;
    
    }
    std::cout << "Sum of 1 to " << limit_range << " inclusive is "
              << sum << std::endl;
    return 0;
}