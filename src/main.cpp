#include "arrays_access.h"
#include<iostream>

using std::cout;

int main()
{
    Array_List list;

    list.add(5);
    list.add(3);

    std::vector<int> nums = list.toVector();

    for(auto num: nums)
    {
        cout<<num<<"\n";
    }
}