// LEETCODE:
// 1704. Determine if String Halves Are Alike

class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        // unordered_map<
        int countv=0;
        int countc=0;
        for(int i=0;i<n;i++){
            if(i<n/2){
                if( s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                    countv++;
                }
                else{
                    countc++;
                }
            }  
            else{
                if( s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                    countv--;
                }
                else{
                    countc--;
                }
            }
        
        }
        if(countc==0 && countv==0){
            return true;
        }
        return false;
    }
};