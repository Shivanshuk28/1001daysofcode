// Leetcode:
// 645. Set Mismatch

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(2);
        vector<int>hash(n);
        for(auto x:nums){
            hash[x-1]++;
        }
        for(int i=0;i<n;i++){
            if(hash[i]==0){
                ans[1]=i+1;
            }
            if(hash[i]==2){
                ans[0]=i+1;
            }
        }
        return ans;
    }
};