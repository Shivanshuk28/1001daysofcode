// LEETCODE

// 2390. Removing Stars From a String




// basic stackk question of removing the star as well as the character left to it.
// so made usse of stack in one of the approach.
//in the secodn approach made use of pop_back and push_back, whenever we approach a star we pop the element else push it.
//in the third approach made use of CP, in which just edited the given string.

// The lines ios_base::sync_with_stdio(false);, cout.tie(nullptr);, and cin.tie(nullptr); are related to input and output stream synchronization in C++. Let's break down each of these lines:

// ios_base::sync_with_stdio(false);:

// By default, C++ standard input and output streams (cin and cout) are synchronized with the C standard input and output streams. This means that operations on cin and cout are synchronized with the operations on stdin and stdout, which can impact the performance of input and output operations.
// By setting sync_with_stdio(false), you are turning off the synchronization between C++ and C standard streams. This can lead to a potential performance improvement for I/O operations, especially when there is a mix of C and C++ I/O operations. However, it's important to note that turning off synchronization might lead to unexpected behavior if not used carefully.
// cout.tie(nullptr);:

// By default, the tie member of cout is set to the cin stream. This means that when an output operation is performed on cout, it flushes the cin buffer. Flushing the cin buffer is generally not necessary for most programs and might lead to a slight performance hit.
// Setting cout.tie(nullptr); unties cout from cin, preventing unnecessary flushing of the cin buffer when performing output operations on cout. This can improve the performance of output operations.
// cin.tie(nullptr);:

// By default, cin is tied to cout. This means that when an input operation is performed on cin, it flushes the cout buffer. Similar to the case of cout, flushing the cout buffer during input operations might not be necessary for most programs.
// Setting cin.tie(nullptr); unties cin from cout, preventing unnecessary flushing of the cout buffer when performing input operations on cin. This can improve the performance of input operations.
// In summary, these adjustments are made to potentially improve the performance of input and output operations, but they need to be used with caution. Disabling synchronization and untying streams can have subtle effects, and it's crucial to understand the consequences, especially in a competitive programming or performance-critical context.

class Solution {
public:
    string removeStars(string s) {
        ios_base::sync_with_stdio(false);
        cout.tie(nullptr);
        cin.tie(nullptr);
        int n=s.length();
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                j--;
            }
            else{
                s[j]=s[i];
                j++;
            }
        }
        return s.substr(0,j);

        // string ans="";
        // for(auto x:s){
        //     if(x=='*')
        //     ans.pop_back();
        //     else
        //     ans.push_back(x);
        // }
        // return ans;

        // stack<char>stk;
        // string ans;
        // for(auto x:s){
        //     if(!stk.empty() && x=='*'){
        //         stk.pop();
        //     }
        //     else{
        //         stk.push(x);
        //     }
        // }
        // while(!stk.empty()){
        //     ans.push_back(stk.top());
        //     stk.pop();
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;
    }
};