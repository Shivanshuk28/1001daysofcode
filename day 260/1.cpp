// Leetcode:
// 82. Remove Duplicates from Sorted List II
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
    ListNode* deleteDuplicates(ListNode* head) {
         map<int,int>mpp;
         ListNode* temp=head;
         while(temp){
             mpp[temp->val]++;
             temp=temp->next;   
         }
         ListNode* temp2=new ListNode(0);
         ListNode* head2=temp2;
         for(auto x:mpp){
             if(x.second==1){
                 temp2->next=new ListNode(x.first);
                 temp2=temp2->next;
             }
         }
         return head2->next;
    }
};