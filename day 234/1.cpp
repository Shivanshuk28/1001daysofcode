// LEETCODE:

// 455. Assign Cookies
// In the question we are given the greed factor and the size of cookie in the differnent arrays.
// so we made them sorted and then using 2 pointers we keep track of the pointer till the point we find the sizes of the greed factor less than or equal to the cookie size.




class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0;
        while(i<s.size() && count<g.size()){
             if(s[i]>=g[count]){
                 count++;
             }
             i++;
        }
        return count;
    }
};