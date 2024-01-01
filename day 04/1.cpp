// ??LEETCODE
// 2351. First Letter to Appear Twice
// Pretty simple approach used here creating  hash here and the point we find the nearest repeating charcter we return it.

class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int>hash(26,-1);
        for(int i=0;i<s.size();i++){
            if(hash[s[i]-'a']!=-1){
                return s[hash[s[i]-'a']];
            }
            hash[s[i]-'a']=i;
        }
        return '-1';
        // int minn=INT_MAX;
        // for(int i=0;i<s.size();i++){
        //     for(int j=i+1;j<s.size();j++){
        //         if(s[i]==s[j]){
        //             minn=min(minn,j);
        //         }
        //     }
        // }
        // return s[minn];
    }
};