#include <fibonacci.h>
#include <iostream>
using std::string;

int fibonacci(int num)
{
    auto val = 0;

    if(num <= 2)
    {
        return 1;
    }

    std::cout<<"load stack "<<num<<" "<<num-1<<"\n";
    std::cout<<"load stack "<<num<<" "<<num-2<<"\n";

    auto n1 = fibonacci(num - 1);
    auto n2 = fibonacci(num - 2);

    val = n1 + n2;
    std::cout<<"unload stack "<<num<<" "<<num-2<<" "<<n2<<" "<<"\n";
    std::cout<<"unload stack "<<num<<" "<<num-1<<" "<<n1<<" "<<"\n";
    
    return val;
}