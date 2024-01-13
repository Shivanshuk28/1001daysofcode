// Rotate List

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        if(k==0 || k==n){
            return head;
        }
        
        k=k%n;
        int k2=n-k;
        if (k2 == 0 || k2==n) {
            return head;
        }
        ListNode* temp2=head;
        int count=0;
        while(temp2){
            count++;
            if(count==k2){
                ListNode* newhead=new ListNode(temp2->next->val,temp2->next->next);
                temp2->next=NULL;
                temp2=newhead;
                break;
            }
            temp2=temp2->next;
        }
        ListNode* temp3=temp2;
        while(temp3->next!=NULL){
            temp3=temp3->next;
        }
        temp3->next=head;
        return temp2;
    }
};