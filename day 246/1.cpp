// leetcode
// Minimum Number of Steps to Make Two Strings Anagram

class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mpp;
        for(auto x:s){
            mpp[x]++;
        }
        for(auto x:t){
            mpp[x]--;
        }
        int ans=0;
        for(auto x:mpp){
            if(x.second>0){
                ans+=x.second;
            }
        }
        return ans;
        
    }
};