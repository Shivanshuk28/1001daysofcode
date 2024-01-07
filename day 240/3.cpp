// LeetcodE:
// 462. Minimum Moves to Equal Array Elements II


class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int each=nums[nums.size()/2];
        int ans=0;
        for(auto x:nums){
            ans+=abs(x-each);
        }
        return ans;
    }
};