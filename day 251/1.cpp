// Leetcode:
// 143. Reorder List

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
    void reorderList(ListNode* head) {
        vector<int>arr;
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        stack<int>stk;
        temp=head;
        while(temp){
            stk.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        int i=0;
        int counter=0;
        while(temp){
            if(counter%2==0){
                temp->val=arr[i];
                i++;
            }
            if(counter%2!=0){
                temp->val=stk.top();
                stk.pop();    
            }
            counter++;
            temp=temp->next;
        }
        



    }
};