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
    node1.data = 10;

    Node node2;
    node2.data = 20;

    Node node3;
    node3.data = 30;
    node3.next = nullptr;

    node2.next = &node3;
    node1.next = &node2;

    Node node4;
    node4.data = 5;
    node4.next = &node1;

    Node *head = &node1;
    Node *current = head;
    while (current->next->data != 20)
    {
        current = current->next;
    }

    current->next = current->next->next;

    current = head;

    while (current != nullptr)
    {
        cout << current->data << endl;
        current = current->next;
    }
}