//cpp
#include "arrays_access.h"

int Array_List::getCurrentSize() const
{
    return index;
}

int Array_List::getIndexOf(const int t)const
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

bool Array_List::isEmpty() const
{
    return index == 0;
}

bool Array_List::add(const int t)
{
    if(index < count)
    {
        list[index] = t;
        index++;

        return true;
    }

    return false;
}

bool Array_List::remove(const int t)
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

void Array_List::clear()
{
    index = 0;
}

int Array_List::getFrequencyOf(const int t) const
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

bool Array_List::contains(const int t) const
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

std::vector<int> Array_List::toVector() const
{
    std::vector<int> nums;
    auto i = 0;
    while(i < index)
    {
        nums.push_back(list[i]);
        i++;
    }

    return nums;
}
