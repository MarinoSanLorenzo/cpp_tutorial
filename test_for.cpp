#include <iostream>

int main()
{
    int sum = 0;
    for (int val=1; val<=10;++val)
    {
        sum+=val;
        std::cout << "Sum is " << sum; 
        std::cout << " after " << val << "th iteration" << std::endl; 
    }
    
    // val variable not accessible out of the for block on newer compilers
}
