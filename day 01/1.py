# both the codes in python and as well in cpp.
# quite easy question to wall

# Leetcode:
    # 1480. Running Sum of 1d Array

    
    
class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        running_sum=[]
        sum=0
        for j in range(len(nums)):
            sum+=nums[j]
            running_sum.append(sum)
        return running_sum


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        return nums;
    }
};
    
    
#a minor change made in code just checking if it puashing easily