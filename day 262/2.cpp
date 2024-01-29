// Leetcode:
// 1721. Swapping Nodes in a Linked List


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
    ListNode* rverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* temp=head;
        while(temp){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int count=0;
        ListNode* temp=head;
        int a=0;
        int b=0;
        while(temp){
            count++;
            if(count==k){
                a=temp->val;
                break;
            }
            temp=temp->next;
        }
        count=0;
        ListNode* head2=rverse(head);
        ListNode* temp2=head2;
        while(temp2){
            count++;
            if(count==k){
                b=temp2->val;
                temp2->val=a;
                break;
            }
            temp2=temp2->next;
        }
        ListNode* revhead2=rverse(head2);
        ListNode* temp3=revhead2;
        int count3=0;
        while(temp3){
            count3++;
            if(count3==k){
                temp->val=b;
                break;
            }
            temp3=temp3->next;
        }
        return revhead2;

        

    }
};