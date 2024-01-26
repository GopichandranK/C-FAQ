#include <iostream>
#include <vector>

int main()
{
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    myVector.push_back(6); // Adding an element to the end
    for (int i = 0; i < myVector.size(); ++i)
    {
        std::cout << myVector[i] << " "; // Access elements
    }
    return 0;
}
