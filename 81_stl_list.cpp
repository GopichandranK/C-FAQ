#include <iostream>
#include <list>

int main()
{
    std::list<int> myList = {1, 2, 3, 4, 5};
    myList.push_front(0); // Insert at the beginning
    myList.push_back(6);  // Insert at the end
    for (int elem : myList)
    {
        std::cout << elem << " "; // Prints the list
    }
    return 0;
}
