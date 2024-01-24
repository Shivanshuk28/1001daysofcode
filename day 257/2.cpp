
// Leetcode:
// 1250. Check If It Is a Good Array


class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
         int g=nums[0];
         for(auto x:nums){
             g=__gcd(g,x);
         }
         return (g==1);
    }
};