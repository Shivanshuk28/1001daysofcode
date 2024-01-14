// LEETCODE
// 1657. Determine if Two Strings Are Close

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>mpp1(26,0);
        vector<int>mpp2(26,0);
        for(char x:word1){
            mpp1[x-'a']++;
        }
        for(char x:word2){
            mpp2[x-'a']++;
        }
        for(int i=0;i<26;i++){
            if((mpp1[i]==0 && mpp2[i]!=0) || (mpp1[i]!=0 && mpp2[i]==0)){
                return false;
            }
        }
        sort(mpp1.begin(),mpp1.end());
        sort(mpp2.begin(),mpp2.end());
        for(int i=0;i<26;i++){
            if(mpp1[i]!=mpp2[i]){
                return false;
            }
        }
        return true;
    }
};