
// Leetcode:
// Minimum Falling Path Sum

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
        int dp[101][101];
        for(int i=0;i<n;i++){
            dp[0][i]=matrix[0][i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int minn=INT_MAX;
                if(i-1>=0) minn=min(minn,dp[i-1][j]);
                if(i-1>=0 && j-1>=0) minn=min(minn,dp[i-1][j-1]);
                if(i-1>=0 && j+1<n) minn=min(minn,dp[i-1][j+1]);
                dp[i][j]=minn+matrix[i][j];
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            ans=min(ans,dp[n-1][i]);
        }
        return ans;

        



    }
};