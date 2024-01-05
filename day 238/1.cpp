// LEETCODE:

// 300. Longest Increasing Subsequence

// DP question self explanatory

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    temp=max(temp,ans[j]);
                } 
            }   
            ans[i]=1+temp;
        }
        return *max_element(ans.begin(),ans.end());
    }
};