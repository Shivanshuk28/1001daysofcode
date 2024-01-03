# ?LEETCODDE
# 448. Find All Numbers Disappeared in an Array


# SELF EXPLANATORY

class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        n=len(nums)
        numset=set(nums)

        s=[]
        for i in range(1,n+1):
            if i not in numset:
                s.append(i)
            

        return s

