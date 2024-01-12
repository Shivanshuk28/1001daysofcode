// Leetcode:
// 21. Merge Two Sorted Lists

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* merged=new ListNode(0);
        ListNode* headd=merged;
        if(list1==NULL && list2==NULL){
            return NULL;
        }
        while(list1!=NULL && list2!=NULL){
            if(list1->val>list2->val){
                merged->val=list2->val;
                list2=list2->next;
            }
            else{
                merged->val=list1->val;
                list1=list1->next;
            }
            if (list1!= NULL || list2!= NULL) {
                merged->next = new ListNode(0);
                merged = merged->next;
            }
        }
        while(list1){
            merged->val=list1->val;
            list1=list1->next;
            if(list1!=NULL){
               merged->next=new ListNode(0); 
               merged=merged->next;
            }
        }
        while(list2){
            merged->val=list2->val;
            list2=list2->next;
            if(list2!=NULL){
               merged->next=new ListNode(0); 
               merged=merged->next;
            }
        }
        return headd;
    }
};