// Leetcode:
// 1332. Remove Palindromic Subsequences


class Solution {
public:
    int removePalindromeSub(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else{
                return 2;
            }
        }
        return 1;
    }
};