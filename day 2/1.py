

# //basic question in which we need to find the product of largest 2 elements in an array.

# // approach1 in which you make the array sorted and return the last two elements and tehir products.

#approach 2: used is in which we intialize two max1 and max2 and then check if element is greater than max1 if its greather then assign that value to max1 and before that assign the value of max1 to max2 this is done because in a case when max1 wil already have ine value and then that value will be assigned to max2 and the updated ele value of max1. 



class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        # max1=max2=float('-inf')
        max1=max2=-1
        for ele in nums:
            if ele>max1:
                max2=max1
                max1=ele
            elif ele>max2:
                max2=ele

            
        return (max2-1)*(max1-1)
        