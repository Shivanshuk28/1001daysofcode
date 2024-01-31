// LeetcodE:
// 739. Daily Temperatures


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> ans(temp.size(),0);
        stack <int> stk;
        for(int i=temp.size()-1;i>=0;i--){
            if(stk.empty()){
                stk.push(i);
                ans[i] = 0;
            }
            else{
                while(!stk.empty() && temp[i]>=temp[stk.top()]){
                    stk.pop();
                }
                if(stk.empty()){
                    ans[i] = 0;
                }

                else{
                    ans[i] = stk.top()-i;
                }
                stk.push(i);
            }
            
        }
        return ans;




        // int n=temp.size();
        // vector<int>ans;
        // int j;
        // for(int i=0;i<n;i++){
        //     bool flag=false;
        //     int t1=temp[i];
        //     for(j=i+1;j<n;j++){
        //         if(temp[j]>t1){
        //             flag=true;
        //             break;
        //         }
        //     }
        //     if(flag){
        //         ans.push_back(j-i);
        //     }
        //     else{
        //         ans.push_back(0);
        //     }
        // }
        // return ans;
    }
};