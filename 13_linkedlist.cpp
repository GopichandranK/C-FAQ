#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node(int d) : data(d), next(nullptr) {}
};
class LinkedList
{
public:
    Node *head;
    LinkedList() : head(nullptr) {}
    void add(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
};
int main()
{
    LinkedList list;
    list.add(1);
    list.add(2);
    list.add(3);
    Node *current = list.head;
    while (current != nullptr)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    return 0;
}
