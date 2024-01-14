
// LEETCODE
// 445. Add Two Numbers II

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=rverse(l1);
        ListNode* t2=rverse(l2);
        int carry=0;
       ListNode* temp=new ListNode(-1);
       ListNode* dummy=temp;
    
       while(t1!=NULL || t2!=NULL){
           int sum=carry;
           if(t1){
               sum+=t1->val;
               t1=t1->next;
           }
           if(t2){
               sum+=t2->val;
               t2=t2->next;
           }
        //    sum+=carry;
           ListNode* newnode=new ListNode(sum%10);
           carry=sum/10;
           dummy->next=newnode;
           dummy=dummy->next;
       }
       if(carry){
           ListNode* new2=new ListNode(carry);
           dummy->next=new2;
       }
       ListNode* ans=temp->next;
       ListNode* mainans=rverse(ans);
       return mainans;
    }
};