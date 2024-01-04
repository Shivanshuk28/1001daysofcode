
// Leetcode:
// 237. Delete Node in a Linked List

//simply we want to delete a node in a linked list then we simply put the value of next node in the current node.
// and also we put node address of next to next node in the current node.


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next; 
    }
};