// LeetcodE:
// 
// 23. Merge k Sorted Lists


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
    private:
    ListNode* convert(vector<int>&arr){
        ListNode* head=new ListNode(arr[0]);
        ListNode* temp=head;
        for(int i=1;i<arr.size();i++){
            ListNode* newnode=new ListNode(arr[i]);
            temp->next=newnode;
            temp=newnode;        
        }
        return head;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int>arr;
        for(auto x:lists){
            ListNode* temp=x;
            if(temp==NULL){
                continue;
            }
            while(temp){
                arr.push_back(temp->val);
                temp=temp->next;
            }
        }
        if(arr.empty()){
            return {};
        }
        sort(arr.begin(),arr.end());
        return convert(arr);

    }
};