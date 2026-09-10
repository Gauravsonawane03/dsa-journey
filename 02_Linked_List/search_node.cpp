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
    node1.next = &node2;

    Node node3;
    node3.data = 20;
    node2.next = &node3;

    Node node4;
    node4.data = 30;
    node3.next = &node4;
    node4.next = nullptr;

    Node *head = &node1;
    Node *current = head;
    while (current != nullptr && current->data!=20)
    {
        current = current->next;
    }
    if(current != nullptr){
        cout<<"Target was found"<<endl;
    }else{
    cout<<"Target not found"<<endl;
    }
}