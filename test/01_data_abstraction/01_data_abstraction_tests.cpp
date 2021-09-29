#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bag.h"

TEST_CASE("Test get current size")
{
    Bag<int> bag;
    REQUIRE(bag.getCurrentSize() == 0);
    bag.add(5);
    REQUIRE(bag.getCurrentSize() == 1);

}

TEST_CASE("Test get index of initial bag")
{
    Bag<int> bag;
    REQUIRE(bag.getIndexOf(1) == -1);
}

TEST_CASE("Test get index of with adds")
{
    Bag<int> bag;
    bag.add(1);
    bag.add(3);
    REQUIRE(bag.getIndexOf(1) == 0);
    REQUIRE(bag.getIndexOf(3) == 1);
    REQUIRE(bag.getIndexOf(0) == -1);
}

TEST_CASE("Test get index of with adds and removes")
{
    Bag<int> bag;
    bag.add(1);
    bag.add(3);
    bag.add(10);
    REQUIRE(bag.getIndexOf(1) == 0);
    REQUIRE(bag.getIndexOf(3) == 1);
    REQUIRE(bag.getIndexOf(0) == -1);
    bag.remove(3);
    REQUIRE(bag.getIndexOf(10) == 1);
}

TEST_CASE("Test is empty")
{
    Bag<int> bag;
    REQUIRE(bag.isEmpty() == true);
}

TEST_CASE("Test add ")
{
    Bag<int> bag;
    REQUIRE(bag.add(1) == true);
    REQUIRE(bag.add(10) == true);
    REQUIRE(bag.add(4) == true);
    REQUIRE(bag.add(100) == true);
    REQUIRE(bag.add(400) == true);
    REQUIRE(bag.add(4) == false);
}

TEST_CASE("Test remove 1 item in list")
{
    Bag<int> bag;
    bag.add(10);
    bag.remove(10);
    REQUIRE(bag.getCurrentSize() == 0);
}

TEST_CASE("Test remove first item")
{
    Bag<int> bag;
    bag.add(1); 
    bag.add(10);
    bag.add(4);
    bag.add(100);
    bag.remove(1);
    
    std::vector<int> expected{10,4,100};
    REQUIRE(bag.toVector() == expected);
}


TEST_CASE("Test remove middle item")
{
    Bag<int> bag;
    bag.add(1); 
    bag.add(10);
    bag.add(4);
    bag.add(100);
    bag.remove(10);
    
    std::vector<int> expected{1,4,100};
    REQUIRE(bag.toVector() == expected);
}

TEST_CASE("Test remove last item")
{
    Bag<int> bag;
    bag.add(1); 
    bag.add(10);
    bag.add(4);
    bag.add(100);
    bag.remove(100);
    
    std::vector<int> expected{1,10,4};
    REQUIRE(bag.toVector() == expected);
}

TEST_CASE("Test clear list")
{
    Bag<int> bag;
    bag.add(1); 
    bag.add(10);
    bag.clear();
    REQUIRE(bag.getCurrentSize() == 0);
}

TEST_CASE("Test get frequency of")
{
    Bag<int> bag;
    bag.add(1); 
    bag.add(10);
    REQUIRE(bag.getFrequencyOf(0) == 0);
    REQUIRE(bag.getFrequencyOf(1) == 1);

    bag.add(1); 
    REQUIRE(bag.getFrequencyOf(1) == 2);
}

TEST_CASE("Test contains")
{
    Bag<int> bag;
    bag.add(1); 
    bag.add(10);
    bag.add(4);
    bag.add(100);

    REQUIRE(bag.contains(0) == false);
    REQUIRE(bag.contains(4) == true);
}