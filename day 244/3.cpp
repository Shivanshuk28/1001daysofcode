// Leetcode:
// 1807. Evaluate the Bracket Pairs of a String

class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mpp;
        string ans="";
        for(auto x:knowledge){
            mpp[x[0]]=x[1];
        }
        for(int i=0;i<s.size();i++){
            string newkey="";
            if(s[i]=='('){
                i++;
                while(s[i]!=')'){
                    newkey.push_back(s[i]);
                    i++;
                }
                if(mpp.find(newkey)!=mpp.end()){
                    ans.append(mpp[newkey]);
                }
                else{
                    ans.push_back('?');
                }
                newkey="";
            }
            else{
                ans.push_back(s[i]);
            }   
        }
        return ans;
    }
};