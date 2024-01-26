#include <iostream>
#include <deque>

int main()
{
    std::deque<int> myDeque;
    myDeque.push_back(1);  // Insert at the end
    myDeque.push_front(2); // Insert at the beginning
    std::cout << "Front element: " << myDeque.front() << std::endl;
    std::cout << "Back element: " << myDeque.back() << std::endl;
    return 0;
}
