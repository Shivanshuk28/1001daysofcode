
# // ??LEETCODE
# // 2351. First Letter to Appear Twice



# SELF EXPLANATORY

class Solution:
    def repeatedCharacter(self, s: str) -> str:
        list1=[]
        for i in range(len(s)):
            if s[i] in list1:
                return s[i]
            else:
                list1.append(s[i])
    
                
        

