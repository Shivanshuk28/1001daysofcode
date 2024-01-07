# Leetcode:
#     2221. Find Triangular Sum of an Array


# basic approach used here is that we can we seee w need to trim down the array tilll the lenght of  array does not becomes 1 so in this case we made a while loop which works on the length of array. with every lopop the size is triped and a last integer in reruned. 

class Solution:
    def triangularSum(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        
        n = len(nums)
        
        while n != 1:
            nums = [(nums[i] + nums[i+1]) % 10 for i in range(n-1)]
            n = len(nums)
        return nums[0]
