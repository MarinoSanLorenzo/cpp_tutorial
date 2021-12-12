#include <iostream>

int main()
{   
    int sum = 0;
    int i =50;
    while (i<=100)
    {
        sum+=i;
        ++i;

    }
     std::cout << "Final value of sum is " << sum << std::endl;
/*    
    for (int i= 50; i<=100; ++i)
        {
            sum+=i;
            std::cout << "Value of sum is " << sum << " after " << i << "th iteration" << std::endl;
        }

    std::cout << "Final value of sum is " << sum << std::endl;

*/

    return 0;
}