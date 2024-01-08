// Leetcode:
// 2348. Number of Zero-Filled Subarrays



class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long temp=0;
        long long ans=0;
        for(auto x:nums){
            if(x==0){
                temp+=1;
                ans+=temp;
            }
            else{
                temp=0;
            }
        }
        return ans;
    }
};