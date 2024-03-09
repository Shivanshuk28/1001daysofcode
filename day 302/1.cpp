
// Leetcode:'
// '
// 860. Lemonade Change

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        //Greedy approach in this basically we made use of hasmap to store these 3 values.
        //on finding 5 we put it in map
        // and on finding 10 we need a 5. so if that 5 is present then we reduce it  else we return false
        //and on finding 20, we need a 10 and a 5. so if a 10 is presnt then a 5 should also be present else false
        //or another condition that 10 is not present then 5 should be present and that to be greater than equal to 3
        // if its present then we continue and exit loop and return true;
        
        map<int,int>mpp;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                mpp[5]++;
            }
            else if(bills[i]==10){
                mpp[10]++;
                if(mpp[5]<1){
                    return false;
                }
                else{
                    mpp[5]--;
                }
                
            }
            else if(bills[i]==20){
                if(mpp[10]>0){
                    mpp[10]--;
                    if(mpp[5]>0){
                        mpp[5]--;
                        continue;
                    }
                    else{
                        return false;
                    }
                }
                else if(mpp[10]==0){
                    if(mpp[5]>2){
                        mpp[5]--;
                        mpp[5]--;
                        mpp[5]--;
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }

            }
        }
        return true;
       

    }
};