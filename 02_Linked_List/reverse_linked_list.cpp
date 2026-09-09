#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int main()
{
    Node node1;
    node1.data = 5;

    Node node2;
    node2.data = 10;

    Node node3;
    node3.data = 20;

    Node node4;
    node4.data = 30;

    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = nullptr;

    Node *head = &node1;

    Node *prev = nullptr;
    Node *current = head;

    while (current != nullptr)
    {
        Node *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;

    current = head;

    while (current != nullptr)
    {
        cout << current->data << endl;
        current = current->next;
    }
}