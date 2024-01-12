// LeetcodE:
// 19. Remove Nth Node From End of List


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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* temp=head;
        int size=0;
        while(temp){
            size++;
            temp=temp->next;
        }
        int k=size-n+1;
        if (k == 1) {
            // If the first node is to be deleted, update head
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        ListNode* temp2=head;
        ListNode* prev=NULL;
        int count=0;
        
        while(temp2){
            count++;
            if(count==k){
                prev->next=temp2->next;
                delete temp;
                break;
            }
            prev=temp2;
            temp2=temp2->next;           
        }
        return head;
    }
};