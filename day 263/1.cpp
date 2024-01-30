// Leetcode:
// 150. Evaluate Reverse Polish Notation


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>stk;
        for(auto x:tokens){
            if(x!="+" && x!="-" && x!="*" && x!="/"){
                stk.push(stoi(x));
            }
            else{
                int b=stk.top();
                stk.pop();
                int a=stk.top();
                stk.pop();
                if(x=="+"){
                    stk.push(a+b);
                }
                else if(x=="-"){
                    stk.push(a-b);
                }
                else if(x=="*"){
                    stk.push(a*b);
                }
                else if(x=="/"){
                    stk.push(a/b);
                }
            }
        }
        return stk.top();
        
    }
};