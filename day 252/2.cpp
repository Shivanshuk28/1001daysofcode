// Swap Nodes in Pairs

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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        vector<int>arr;
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }

        for(int i=0;i<arr.size()-1;i=i+2){
            swap(arr[i],arr[i+1]);
        }
        temp=head;
        int i=0;
        while(temp){
            temp->val=arr[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};