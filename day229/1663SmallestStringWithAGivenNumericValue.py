class Solution:
    def getSmallestString(self, n: int, k: int) -> str:
        print((k-n)//25)
        b=k-26*((k-n)//25)-(n-(k-n)//25-1)
        print(b)
        a=divmod((k-n),25)
        print(a)
        return 'a'*(n-(k-n)//25-1)*(a[0]!=n)+chr(b+97-1)*(a[0]!=n)+'z'*(((k-n)//25))