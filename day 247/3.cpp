// Leetcode:
// 2816. Double a Number Represented as a Linked List

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
     private:
    ListNode* rverse(ListNode* head){
            ListNode* temp=head;
            ListNode* prev=NULL;
            while(temp){
                ListNode* front=temp->next;
                temp->next=prev;
                prev=temp;
                temp=front;
            }
            return prev;
        }
public:
    ListNode* doubleIt(ListNode* head) {
        head=rverse(head);
        ListNode* temp=head;
        int carry=0;
        while(temp){
            int x=(temp->val*2)+carry;
            temp->val=x%10;
            carry=x/10;
            temp=temp->next;
        }
        head=rverse(head);
        if(carry>0){
            ListNode* newhead=new ListNode(carry);
            newhead->next=head;
            head=newhead;
        }
        return head;
    }
};