// LEETCODDE

// 1624. Largest Substring Between Two Equal Characters
// Simply made use of hashtable for placing the last index of the charcter present in the string
// and then again using a loop for subtracting the hash index and current index of the character in the string and checking it with max function


class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int hash[26]={0};
        int ans=-1;
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']=i;
        }
        for(int i=0;i<s.length();i++){
            ans=max(ans,hash[s[i]-'a']-i-1);
        }
        return ans;
    }
};