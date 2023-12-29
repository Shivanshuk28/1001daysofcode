// Approach used in this question was kadane's algoritm which basically does is if cursum becomes less than 0(i.e negative) then the cursum is intialised again to zero. and maxsum is calculated in this way.
// But there was a catch in the question that you needed to find the maxiumum absolute sum, so 2 times kadanes algo was used for finding the maxsum which will be offcourse postive and minsum was calculted which
// was to be in negative but just needed to make it absolute (positive). hence at last both of them were checked which one is maximum. 


class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum=INT_MIN;
        int cursum=0;
        for(auto x:nums){
            cursum=max(cursum,0);
            cursum+=x;
            maxsum=max(maxsum,cursum);
        }
        int minsum=INT_MAX;
        int cusum=0;
        for(auto x:nums){
            cusum=min(cusum,0);
            cusum+=x;
            minsum=min(minsum,cusum);
        }
        return max(abs(maxsum),abs(minsum));

        // int maxx=0;
        // int curp=0;
        // int curn=0;
        // for(auto x:nums){
        //     curp+=x;
        //     curn+=x;
        //     maxx=max({maxx,abs(curp),abs(curn)});
        //     if(curp<0){
        //         curp=0;
        //     }
        //     if(curn>0){
        //         curn=0;
        //     }
        // }
        // return maxx;
    }
};
