// Leetcode:
// 929. Unique Email Addresses



class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>st;
        for(auto x:emails){
            string mini="";
            for(int i=0;i<x.size();i++){
                if(x[i]=='.'){
                    continue;
                }
                if(x[i]=='+' || x[i]=='@'){
                    break;
                }
                else{
                    mini.push_back(x[i]);
                }
            }
            mini+=x.substr(x.find('@'));
            st.insert(mini);
        }
        return st.size();
    }
};