//LEEtcoDE:
// 1235. Maximum Profit in Job Scheduling




class Solution {
public:
    int dp[50000];
    int findmaxprofit(vector<vector<int>>&jobs,vector<int>&start,int n,int id){
        if(id==n) return 0;
        if(dp[id]!=-1) return dp[id];
        int nextindex=lower_bound(start.begin(),start.end(),jobs[id][1])-start.begin();
        int maxprofit=max(findmaxprofit(jobs,start,n,id+1),findmaxprofit(jobs,start,n,nextindex)+jobs[id][2]);
        return dp[id]=maxprofit;
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
            vector<vector<int>>jobs;
            memset(dp,-1,sizeof(dp));
            for(int i=0;i<profit.size();i++){
                jobs.push_back({startTime[i],endTime[i],profit[i]});
            }
            sort(jobs.begin(),jobs.end());
            for(int i=0;i<profit.size();i++){
                startTime[i]=jobs[i][0];
            }
            return findmaxprofit(jobs,startTime,profit.size(),0);
    }
};