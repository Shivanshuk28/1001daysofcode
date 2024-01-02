# //leetcode:
# // 1929. Concatenation of Array


# // simple program.

class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        ans=list(nums)+list(nums)
        return ans