// Leetcode:
// 147. Insertion Sort List


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

//basically we did was just took out the elements from linkedlist
//sorted it and then again put back in linkedlist
    ListNode* insertionSortList(ListNode* head) {
     vector<int>arr;
        ListNode*  temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
        ListNode* newhead=new ListNode(arr[0]);
        ListNode* temp2=newhead;
        for(int i=1;i<arr.size();i++){
            ListNode* neww=new ListNode(arr[i]);
            temp2->next=neww;
            temp2=temp2->next;
        }
        return newhead;
    }
};