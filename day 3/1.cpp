//Main approach to this question was creating  a map of the elements of an array and then usign another loop put that elements one wise one into a small vector row . such that it just adds only one element of that hashmap in the small vector and then decrease one value of map.

// continues this loop until mapp is not empty.
// hence yu get ur answer.


class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int>mpp;
        for(auto x:nums){
            mpp[x]++;
        }
        vector<vector<int>>ans;
        while(1){
            bool flag=true;  
            vector<int>row;
            for(auto x:mpp){
                if(x.second>0){
                    flag=false;
                    row.push_back(x.first);
                    mpp[x.first]--;
                }   
            }
            if(flag){
                return ans;
            }
            ans.push_back(row);
        }
        return ans;
    }
};