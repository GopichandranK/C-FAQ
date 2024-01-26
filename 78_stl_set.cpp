#include <iostream>
#include <set>

int main()
{
    std::set<int> mySet;
    mySet.insert(3);
    mySet.insert(1);
    mySet.insert(5);
    for (int elem : mySet)
    {
        std::cout << elem << " "; // Will print: 1 3 5
    }
    return 0;
}
