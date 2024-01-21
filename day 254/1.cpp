// LeetcodE:
// 198. House Robber


class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()<3){
            return *max_element(nums.begin(),nums.end());
        }
        int prev=nums[0];
        int current=max(nums[0],nums[1]);
        for (int i=2;i<n;i++){
            int temp=current;
            current=max(nums[i]+prev,current);
            prev=temp;
        }
        return current;
        

    }
};