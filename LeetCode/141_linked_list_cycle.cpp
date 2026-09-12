/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <iostream>
#include <unordered_set>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* current = head;
    unordered_set<ListNode*> visited;
    while (current != nullptr) {
        if(visited.count(current)){
            return true;
        }else 
     visited.insert(current);
    current = current->next;
    }
    return false;
    }
};