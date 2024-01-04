// LEETCODE:
// 876. Middle of the Linked List

// All you need to find is the middle of linked list, so in this question we see we found the length and found the middle index and then we iterated through a counter to check if it reaches the mid or not. we we reach we interchange the head at that element and thus return it. 


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
    ListNode* middleNode(ListNode* head) {
        int ln=0;
        ListNode* temp=head;
        while(temp){
            ln++;
            temp=temp->next;
        }
        int mid=0;
        if(ln%2!=0){
            mid=(ln/2)+1;
        }
        else{
            mid=(ln/2)+1;
        }
        int cnt=0;
        ListNode* temp2=head;
        while(temp2){
            cnt++;
            if(cnt==mid){
                head=temp2;
                break;
            }
            temp2=temp2->next;
        }
        return head;
    }
};