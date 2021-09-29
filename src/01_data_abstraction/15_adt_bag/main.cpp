#include "bag.h"
#include <iostream>

using std::cout;  using std::vector;

int main()
{
    Bag<char> chars;
    chars.add('a');
    chars.add('b');
    chars.add('c');

    vector<char> list = chars.toVector();    

    for(auto c: list)
    {
        cout<<c<<"\n";
    }

    return 0;
}