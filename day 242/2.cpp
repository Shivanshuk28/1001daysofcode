// 1019. Next Greater Node In Linked List

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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>arr;
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        } 
        stack<int>stk;
        stk.push(0);
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
             int curr=arr[i];
             while(stk.top()!=0 && stk.top()<=curr){
                 stk.pop();
             }
             arr[i]=stk.top();
             stk.push(curr);
        }
        return arr;


        // ListNode* trans=head;
        // ListNode* temp2=head;
        // vector<int>ans;
        // if(head==NULL){
        //     return {};
        // }
        // if (head->next==NULL){
        //     ans.push_back(head->val);
        // }
        // while(temp2){
        //     while(trans){
        //         if (trans->val>temp2->val){
        //             ans.push_back(trans->val);
        //             trans=head->next;
        //             temp2=temp2->next;
        //             // break;
        //         }
        //         else{
        //             trans=trans->next;
        //         }
        //     }
        //     ans.push_back(0);
        //     // trans=trans->next;
        //     temp2=temp2->next;
        // }
        // return ans;
    }
};