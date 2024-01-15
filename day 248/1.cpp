// Leetcode
// 2225. Find Players With Zero or One Losses


class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans(2);
        map<int,int>mpp;
        for(int i=0;i<matches.size();i++){
            mpp[matches[i][0]]+=0;
            mpp[matches[i][1]]++;
        }
        for(auto x:mpp){
            if(x.second==0){
            ans[0].push_back(x.first);
            }
        }
        for(auto x:mpp){
            if(x.second==1){
                ans[1].push_back(x.first);
            }
        }
        return ans;
    }
};