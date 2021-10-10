#include "arrays.h"

using std::cout;

void write_array_reverse(int array[], int size)
{
    if(size < 1)
    {
        return;
    }

    cout<<array[size-1]<<"\n";
    write_array_reverse(array, size - 1);
}