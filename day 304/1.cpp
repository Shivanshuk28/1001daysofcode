// Leetcode:
// 1614. Maximum Nesting Depth of the Parentheses/

class Solution {
public:
    int maxDepth(string s) {
        int maxx=0;
        int open=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open++;
            }
            else if(s[i]==')'){
                maxx=max(maxx,open);
                open--;
            }
        }
        return maxx;
    }
};