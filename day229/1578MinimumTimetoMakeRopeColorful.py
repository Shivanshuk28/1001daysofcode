class Solution:
    def minCost(self, c: str, n: List[int]) -> int:
        a=0
        for i in range(len(c)-1):
            if c[i]==c[i+1]:
                a+=min(n[i],n[i+1])
                n[i+1]=max(n[i],n[i+1])
        return a