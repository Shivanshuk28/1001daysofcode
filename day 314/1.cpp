// 92. Reverse Linked List II


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
    ListNode* rverse(ListNode* head,int k){
        ListNode* prev=NULL;
        ListNode* temp=head;
        while(k--){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev; 
    }

public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || head->next==NULL){
            return head;
        }
        ListNode* dummy=new ListNode(-1);
        dummy->next = head;
        ListNode* prev=dummy;
        for(int i=0;i<left-1;i++){
            prev=prev->next;
        }
        //in the prev node, we kept the elements till before left
        //start is the pointer where we store the start of the mid(which is to be reversed)
        //and then iterated till the end.
        ListNode* start=prev->next;
        ListNode* end=start;
        for(int i=0;i<right-left;i++){
            end=end->next;
        }
        // ..now next contains teh pointer of the elements after end(i.2 is last ele of middle branch)
        ListNode* next=end->next;
        end->next=NULL;
        //end ka next is kept null so that no probekm ocurs during reversing
        //attached the prev(first part)with the middle.
        prev->next=rverse(start,right-left+1);
        //then attach the satrt(middle) with next(last)
        start->next=next;
        return dummy->next;

        

        
    }
};