#ifndef BAG_H
#define BAG_H
#include "bag_interface.h"

template<class T>
class Bag: public BagInterface<T>
{
public:
    int getCurrentSize() const override;
    int getIndexOf(const T& t)const override;
    bool isEmpty() const override;
    bool add(const T& t) override;
    bool remove(const T& t) override;
    void clear() override;
    int getFrequencyOf(const T& t) const  override;
    bool contains(const T& t) const override;
    std::vector<T> toVector() const override;
private:
    enum { count = 5 };
    T list[count];
    int index{0};
};

#include "bag.cpp"

#endif