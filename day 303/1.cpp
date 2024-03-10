// LEETcode:
// 3075. Maximize Happiness of Selected Children


class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(),happiness.rend());
        long long ans=0;
        int minn=0;
        for(int i=0;i<k;i++){
            if(minn<happiness[i]){
                ans+=happiness[i]-minn;
            }
            minn++;
        }
        return ans;
    }
};