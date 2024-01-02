// LEETCODE:
// 2545. Sort the Students by Their Kth Score

// So in this we needed to sort by the kth column so we make a pair in which we store 2 values that are the elements at that kth column and second is we store that index. and then sort it in inc order and then in=terate through last to first so that we have greatest row first.



    class Solution {
    public:
        vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
            vector<vector<int>>ans;
            vector<pair<int,int>>mpp;
            int n=score.size();
            for(int i=0;i<n;i++){
                mpp.push_back(make_pair(score[i][k],i));
            }
            sort(mpp.begin(),mpp.end());
            for(int i=n-1;i>=0;i--){
                ans.push_back(score[mpp[i].second]);
            }
            return ans;
        }
    };