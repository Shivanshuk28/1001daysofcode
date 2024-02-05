// Leetcode:
// 605. Can Place Flowers


class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        int count=0;
        for(int i=0;i<fb.size();i++){
            if(fb[i]==1){
                i++;
            } 
            else if(fb[i]==0 && (i==0 || fb[i-1]!=1) && (i==fb.size()-1 || fb[i+1]!=1)){
                fb[i]=1;
                count++;
            }
        }
        if(count>=n){
            return true;
        }
        return false;
    }
};