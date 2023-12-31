// LEETCODE

// 735. Asteroid Collision

// The crux of question is if 2 asteroid are moving in same direction then they will be never collide.
// if sateroid is moving in right direction and then comes a asteroid moving iin left direction and its asboulte value is greater then the right direction asteoid gets destriyed and left direction gets placed.



class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        stack<int>stk;
        vector<int>ans;
        for(auto x:as){
            if(stk.empty() || x>0){
                stk.push(x);
            }
            else{
                while(!stk.empty() && stk.top()>0 && abs(x)>stk.top()){
                    stk.pop();
                }
                if(!stk.empty() && stk.top()==abs(x)){
                    stk.pop();
                }
                else if(stk.empty() || stk.top()<0){
                    stk.push(x);
                }
                
            }
        }
        while(!stk.empty()){
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};