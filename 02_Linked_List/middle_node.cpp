#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node node1, node2, node3;

    node1.data = 10;
    node2.data = 20;
    node3.data = 30;

    node1.next = &node2;
    node2.next = &node3;
    Node newnode2;
    newnode2.data = 40;
    newnode2.next = nullptr;
    node3.next = &newnode2;

    Node newNode;
    newNode.data = 5;
    newNode.next = &node1;

    Node *head = &newNode;
    Node *current = head;

    while (current != nullptr)
    {
        current = current->next;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << slow->data << endl;
}