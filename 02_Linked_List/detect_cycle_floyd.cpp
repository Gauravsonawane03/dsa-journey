#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
int main(){
    Node node1,node2,node3,node4;
    node1.data=1;
    node2.data=2;
    node3.data=3;
    node4.data=4;

    node1.next=&node2;
    node2.next=&node3;
    node3.next=&node4;
    node4.next=&node3;

    Node *head=&node1;
    Node *slow=head;
    Node *fast=head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
    {
        cout << "cycle exists" << endl;
        return 0;
    }
    }
        cout<<"Cycle doesnt exists."<<endl;
    
}