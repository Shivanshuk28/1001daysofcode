// LEETCODE:
// Merge Intervals



class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inte) {
        vector<vector<int>>ans;
        sort(inte.begin(),inte.end());
        for(int i=0;i<inte.size();i++){
            int start=inte[i][0];
            int end=inte[i][1];
            while(i<inte.size()-1 && end>=inte[i+1][0]){
                end=max(end,inte[i+1][1]);
                i++;
            }
            ans.push_back({start,end});
        }   
        return ans;
    }
};