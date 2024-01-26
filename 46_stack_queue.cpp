#include <stack>
#include <queue>
#include <iostream>

int main()
{
    std::stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    while (!stack.empty())
    {
        std::cout << ' ' << stack.top();
        stack.pop();
    }
    std::queue<int> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    while (!queue.empty())
    {
        std::cout << ' ' << queue.front();
        queue.pop();
    }
    return 0;
}
