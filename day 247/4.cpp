

// LEETCODE
// 2095. Delete the Middle Node of a Linked List
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
    ListNode* deleteMiddle(ListNode* head) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        if(head==NULL or head->next==NULL) return NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        while(fast && fast->next!=NULL){
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;
        }
        prev->next=slow->next;
        slow->next=NULL;
        delete slow;
        return head;





    }
};