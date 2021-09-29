#include "bag.h"
#ifndef BAG_CPP
#define BAG_CPP

template<class T>
int Bag<T>::getCurrentSize() const
{
    return index;
}

template<class T>
int Bag<T>::getIndexOf(const T& t)const
{
    auto idx = 0;

    while(idx < index)
    {
        if(list[idx] == t)
        {
            return idx;
        }

        idx++;
    }
   
    return -1;
}

template<class T>
bool Bag<T>::isEmpty() const
{
    return index == 0;
}

template<class T>
bool Bag<T>::add(const T& t)
{
    if(index < count)
    {
        list[index] = t;
        index++;

        return true;
    }

    return false;
}

template<class T>
bool Bag<T>::remove(const T& t)
{
    auto found = false;
    auto i = getIndexOf(t);

    if(i != -1)
    {
        if(i == index)
        {
            index--;
            return found;
        }

        index--;
        while(i < index)
        {
            list[i] = list[i + 1];
            i++;
        }
    }

    return found;
}

template<class T>
void Bag<T>::clear()
{
    index = 0;
}

template<class T>
int Bag<T>::getFrequencyOf(const T& t) const
{
    auto count = 0;
    auto i = 0;
    
    while(i < index)
    {
        if(list[i] == t)
        {
            count++;
        }

        i++;
    }

    return count;
}

template<class T>
bool Bag<T>::contains(const T& t) const
{
    bool found = false;
    auto i = 0;

    while(i < index)
    {
        if(list[i] == t)
        {
            found = true;
            break;
        }
        
        i++;
    }

    return found;
}

template<class T>
std::vector<T> Bag<T>::toVector() const
{
    std::vector<T> nums;
    auto i = 0;
    while(i < index)
    {
        nums.push_back(list[i]);
        i++;
    }

    return nums;
}
#endif
