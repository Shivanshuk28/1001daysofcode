// Leetcode:
// 2917. Find the K-or of an Array


class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        vector<int>bits(32,0);
        int ans=0;
        for(auto x:nums){
            for(int i=0;i<32;i++){
                if(((1<<i)&x)==0) continue;
                bits[i]++;
                if(bits[i]==k){
                    ans|=(1<<i);
                }
            }
        }
        return ans;
    }
};