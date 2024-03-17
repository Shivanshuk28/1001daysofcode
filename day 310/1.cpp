// leetcode:
// 57. Insert Interval
// 


class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inte, vector<int>& arr) {
        vector<vector<int>>ans;
        int i=0;
        //basically we  iterate over the intervals given adn we find the position where 
        // the newinterval can be added . and updated the values of new intervals and checked with 
        // the upcoming intervals.
        // a break condition is kept when  interval[0] is gretaer than newinterval[1].
        // and at last we pushed it back into it also  and put the left over intervals into the ans array.
        while(i<inte.size()){
            if(inte[i][1]<arr[0]){
                ans.push_back(inte[i]);
            }
            else if(inte[i][0]>arr[1]){
                break;
            }
            else{
                arr[0]=min(inte[i][0],arr[0]);
                arr[1]=max(inte[i][1],arr[1]);
            }
            i++;
        }
        ans.push_back(arr);
        while(i<inte.size()){
            ans.push_back(inte[i]);
            i++;
        }
        return ans;
    }
};