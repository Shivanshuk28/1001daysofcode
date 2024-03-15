// Leetcode
// 2058. Find the Minimum and Maximum Number of Nodes Between Critical Points
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        // basicallly ek prev rkha hai and ek temp rkha hai
        //taaking prev and temp ke next se compare kara and agr critical point mil jaye toh uska index
        //to array ke anadr store kardiya and last me min difference between 2 indexes and max diff between first and last
        //ka difference kiya and vo return kardiya ek array me daalke 
        ListNode* prev=head;
        ListNode* temp=head->next;
        vector<int>arr;
        if(temp->next==NULL){
            return {-1,-1};
        }
        int count=1;
        while(temp->next!=NULL){
            if((temp->val>prev->val && temp->val>temp->next->val) ||(temp->val<prev->val && temp->val<temp->next->val)){
                arr.push_back(count);
                count++;
            }
            else{
                count++;
            }
            temp=temp->next;
            prev=prev->next;

        }
        // for(auto x:arr){
        //     cout<<x<<" ";
        // }
        if(arr.size()<2){
            return {-1,-1};
        }
        sort(arr.begin(),arr.end());
        int minn=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            minn=min(minn,abs(arr[i]-arr[i+1]));
        }
        return{minn,arr[arr.size()-1]-arr[0]};

        // for(auto x:arr){
        //     cout<<x<<" ";
        // }
        // return arr;
    }
};