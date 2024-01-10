// Leetcode:
// 2. Add Two Numbers

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
    ListNode* addTwoNumbers(ListNode* t1, ListNode* t2) {
       int carry=0;
       ListNode* temp=new ListNode(-1);
       ListNode* dummy=temp;
    //    if(t1->next==NULL && t2->next==NULL){
    //        return NULL;
    //    }
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
       return temp->next;


    }
};