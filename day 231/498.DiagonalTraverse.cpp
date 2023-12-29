//intitutive approach on  seing this question was on understanding the pattern on whats happening.So as you can see when the array is going up the row value is decreasing and column value is increasing.

//whereas in the case of when path is going down we could easily see the value of row is increasing and value of column is decreasing. 

//and then comes a condition to check if the current value of column on going up is equal to n-1(i.e less than total size(index wise)) then in that case we shift the row by 1 (inc by 1) 
//else just shift the column by 1.

//similar condition to be checked on going down, if the value of row == m-1 then increase the column by 1.
//else just increase the row in normal case.



class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int>ans;
        int row=0;
        int col=0;
        bool up=true;
        while(row<m && col<n){
            if(up){
                while(row>0 && col<n-1){
                    ans.push_back(mat[row][col]);
                    row--;
                    col++;
                }
                ans.push_back(mat[row][col]);
                if(col==n-1){
                    row++;
                }
                else{
                    col++;
                }
            }
            else{
                while(row<m-1 && col>0){
                    ans.push_back(mat[row][col]);
                    row++;
                    col--;
                }
                ans.push_back(mat[row][col]);
                if(row==m-1){
                    col++;
                }
                else{
                    row++;
                }
            }
            up=!up;
        }
        return ans;
    }
};