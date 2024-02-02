// Leetcode:
// 1291. Sequential Digits

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string a="123456789";
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            for(int j=i+1;j<a.size();j++){
                int num=stoi(a.substr(i,j-i+1));
                if(num>high)break;
                if(num>=low) ans.push_back(num);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
};