#include "display.h"

using std::cout;

void display(int n)
{
    if(n == 0)
    {
        return;
    }

    display(n-1);

    cout<<"hello\n";
}