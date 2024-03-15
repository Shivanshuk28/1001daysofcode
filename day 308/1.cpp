// Leetcode:
// 71. Simplify Path


class Solution {
public:
    string simplifyPath(string path) {
        stack<string>stk;
        //ek stack liya jisme agr / aata hai toh usko ignore karte hai
        //and agr kuch . ya koi character aati hai toh usko temp me store karte hai
        //and chack karte hai ki agr . ata hia toh ignore kardete hai 
        // and agr .. ata hai toh stack me last string ko pop kardete hai
        // aagr indono me kuch na ho toh usko stack me push kardete hai
        // and last me / add karke usko return kardete hai
        for(int i=0;i<path.size();i++){
            if(path[i]=='/'){
                continue;
            }
            string temp="";
            while(i<path.size() && path[i]!='/'){
                temp+=path[i];
                i++;
            }
            if(temp==".")continue;
            else if(temp==".."){
                if(!stk.empty()){
                    stk.pop();
                }
            }
            else{
                stk.push(temp);
            }
        }
        string ans="";
        while(!stk.empty()){
            ans='/'+stk.top()+ans;
            stk.pop();
        }
        if(ans.size()==0) return "/";
        return ans;
    }
};