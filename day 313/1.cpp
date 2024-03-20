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
    ListNode* partition(ListNode* head, int x) {
        //just created two different  smaller and greater nodes 
        // and pushed the elemenet in two different nodes and then merged them
        ListNode* smaller = new ListNode(-1);
        ListNode* smallerHead = smaller; // Head for smaller values
        ListNode* greater = new ListNode(-1);
        ListNode* greaterHead = greater;
        ListNode* temp = head;
        while(temp){
            if(temp->val<x){
                smaller->next=temp;
                smaller=smaller->next;
            }
            if(temp->val>=x){
                greater->next=temp;
                greater=greater->next;
            }
            temp=temp->next;
        }
        greater->next=NULL;
        smaller->next=greaterHead->next;
        return smallerHead->next;
        
    }
};