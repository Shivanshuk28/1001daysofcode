
// Leetcode:
// 160. Intersection of Two Linked Lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * temp1=headA;
        ListNode * temp2=headB;
        int n1=0;
        int n2=0;
        while(temp1){
            temp1=temp1->next;
            n1++;
        }
        while(temp2){
            temp2=temp2->next;
            n2++;
        }
        temp1=headA;
        temp2=headB;

        if(n2>n1){
            int d=n2-n1;
            while(d){
                temp2=temp2->next;
                d--;
            }
        }
        else if (n1>n2){
            int d=n1-n2;
            while(d){
                temp1=temp1->next;
                d--;
            } 
        }
        while(temp1 && temp2){
                if(temp1==temp2){
                    return temp1;
                }
                temp1=temp1->next;
                temp2=temp2->next;
            }
        return NULL;

        //  unordered_map<ListNode*,int>mpp;
        // ListNode * temp=headA;
        // while(temp){
        //     mpp[temp]=1;
        //     temp=temp->next;
     
        // }
        // ListNode * temp2=headB;
        // while(temp2){
        //     if(mpp.find(temp2)!=mpp.end()){
        //         return temp2;
        //     }
        //     temp2=temp2->next;
        // }
        // return NULL;


    }
};