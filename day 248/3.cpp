// Leetcode:

// 234. Palindrome Linked List
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        stack<int>stk;
        while(temp){
            stk.push(temp->val);
            temp=temp->next;
        }
        ListNode* temp2=head;
        while(temp2){
            if(stk.top()!=temp2->val){
                return false;
            }
            stk.pop();
            temp2=temp2->next;
        }
        return true;
    }
};