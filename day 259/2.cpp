// Leetcode:
// 576. Out of Boundary Paths


class Solution {
public:
    int mod=1e9+7;  
    int solve(int i,int j,int m,int n,int mx,int dp[51][51][51])
    {
        if(mx==0) 
        {
           if(i>=m || i<0 || j>=n || j<0) return 1;
           return 0; 
        }
        
        if(i>=m || i<0 || j>=n || j<0) return 1;
        
        if(dp[i][j][mx]!=-1) return dp[i][j][mx];

        long long opt1=solve(i,j+1,m,n,mx-1,dp);
        long long opt2=solve(i+1,j,m,n,mx-1,dp);
        long long opt3=solve(i-1,j,m,n,mx-1,dp);
        long long opt4=solve(i,j-1,m,n,mx-1,dp);

        return dp[i][j][mx]=(opt1+opt2+opt3+opt4)%(mod);
    }
    int findPaths(int m, int n, int mx, int st, int sc) {
        int dp[51][51][51];

        memset(dp,-1,sizeof(dp));
        return solve(st,sc,m,n,mx,dp);
    }
};