//3005. Count Elements With Maximum Frequency

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mpp;
        //map is used to store the frequency of all elements and max value(counter) is used 
        // to keep track of maximum frequency number
        int maxx=0;
        int ans=0;
        for(auto x:nums){
            mpp[x]++;
            maxx=max(maxx,mpp[x]);
        }
        // then this loop is helping us to find the elements which have same frequency as 
        // the max element and they all are added up and returned.
        for(auto x:mpp){
            if(maxx==x.second){
                // cout<<x.second<<" ";
                ans+=maxx;
            }
        }
        return ans;
    }
};