// LEETCODE:

// 2125. Number of Laser Beams in a Bank

// basic approach of the question was intitializing a count of first row and then inside the loop keep track of count of 1s in each row and then multiply it with count1.
// And thus reinitializing the valu of count1 as count2, on every successfull addition.


class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        int count1=count(bank[0].begin(),bank[0].end(),'1');
        for(int i=1;i<bank.size();i++){
            int count2=count(bank[i].begin(),bank[i].end(),'1');
            if(count2>0){
                ans+=count1*count2;
                count1=count2;
            }
        }
        return ans;
    }
};