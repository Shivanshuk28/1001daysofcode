// Leetcode:
// Maximum Length of a Concatenated String with Unique Characters


class Solution {
    private:
    int dfs(int index,vector<string>&arr,vector<int>vis){
        if(index==arr.size()){
            return 0;
        }
        int skip=dfs(index+1,arr,vis);
        for(char c:arr[index]){
            if(vis[c-'a']) return skip;
            vis[c-'a']=1;
        }
        int noskip=arr[index].length()+dfs(index+1,arr,vis);
        return max(skip,noskip);
    }
public:
    int maxLength(vector<string>& arr) {
        vector<int>visited(26,0);
        return dfs(0,arr,visited); 
    }
};