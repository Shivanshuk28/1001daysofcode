// Leetcode:
// 1370. Increasing Decreasing String




class Solution {
public:
    string sortString(string s) {
        vector<int>mpp(26,0);
        string ans="";
        for(auto x:s){
            mpp[x-'a']++;
        }
        int n=s.size();

        //  while (any_of(mpp.begin(), mpp.end(), [](int count) { return count > 0; }))
        while(n){
            for(int i=0;i<26;i++){
                if(mpp[i]>0){
                ans.push_back(char('a'+i));
                mpp[i]--;
                n--;
                }
            }
            for(int i=25;i>=0;i--){
                if(mpp[i]>0){
                ans.push_back(char('a'+i));
                mpp[i]--;
                n--;
                }
            }

        }
        return ans;
    }
};