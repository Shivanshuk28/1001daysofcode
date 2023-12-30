//Leetcode
//1897. Redistribute Characters to Make All Strings Equal

//basic approach while solving the leetcode problem was to check if all the string present in all cases can be made equal or not with the provided elements.
//So made use of mapping to calculate aal their frequencies and check if they  are divisible by n i.e the length of input array.
//if all the frequencies are divisible we return true else false.




class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int>mpp;
        int n=words.size();
        for(auto x:words){
            for(auto i:x){
                mpp[i]++;
            }
        }
        for(auto x:mpp){
            if(x.second%n!=0){
                return false;
            }
        }
        return true;
    }
};