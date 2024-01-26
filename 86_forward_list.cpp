#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<int> myList = {1, 2, 3, 4, 5};
    myList.push_front(0); // Adds an element at the front
    for (int elem : myList)
    {
        std::cout << elem << " "; // Prints the list
    }
    return 0;
}
