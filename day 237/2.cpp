// Leetcode:

// 2870. Minimum Number of Operations to Make Array Empty

// in this question we take the approach of using a mapping and then iterating thriugh the map and finding if any of the map value is 1, we simply return -1.
// and in the else condition we kept that if mpp value is 2 or 3 ,we simply add 1 to counter.
// and if mapp value is greater than 3, then we add to counter by value/3 and if value%3 returns 1 then we add another 1 to counter, its because of one 1 is left. 




class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int coun t=0;
        for(auto x:nums){
            mpp[x]++;
        }
        for (auto &x:mpp){
            if(x.second==1){
                return -1;
            }
            else if(x.second==2 || x.second==3){
                count++;
            }
            else if(x.second>3){
                count+=x.second/3;
                if(x.second%3!=0){
                    count++;
                }
            }
      
        }
        return count;
    }
};