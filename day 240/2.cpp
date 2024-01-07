// Leetcode:
// 2640. Find the Score of All Prefixes of an Array

class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>ans;
        int n=nums.size();
        long long maxx=0,sum=0;
        for(int i=0;i<n;i++){
            maxx=max(maxx,(long long)nums[i]);
            sum+=nums[i]+maxx;
            ans.push_back(sum);            
        }
        return ans;
    }
};