// LeetcodE:
// 3074. Apple Redistribution into Boxes


class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
               
        int total=0;
        for(auto x:apple){
            total+=x;
        }
        sort(capacity.rbegin(),capacity.rend());
        int count=0;
        int i=0;
        while(total>0){
            total-=capacity[i];
            count++;
            i++;
        }
        return count;


    }
};