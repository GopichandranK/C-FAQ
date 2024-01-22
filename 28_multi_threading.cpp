#include <iostream>
#include <thread>
void threadFunction()
{
    std::cout << "Hello from thread\n";
}
int main()
{
    std::thread t(threadFunction); // Create a thread running threadFunction
    t.join();                      // Wait for the thread to finish
    std::cout << "Hello from main\n";
    return 0;
}
