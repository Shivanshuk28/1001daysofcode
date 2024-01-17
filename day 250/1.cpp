
// Leetcode:

// 148. Sort List


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
    ListNode* sortList(ListNode* head) {
        ListNode* temp=head;
        vector<int>arr;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
            }
        sort(arr.begin(),arr.end());
        ListNode* temp2=head;
        int i=0;
        while(temp2){
            temp2->val=arr[i];
            temp2=temp2->next;
            i++;
        }
        return head;

    }
};