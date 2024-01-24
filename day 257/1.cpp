// leetcode:
// 1457. Pseudo-Palindromic Paths in a Binary Tree


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    bool ispalindrome(vector<int>& digits){
        int odd=0;
        for(int i=1;i<=9;i++){
            if(digits[i]%2!=0){
                odd++;
            }
        }
        if(odd>1){
            return false;
        }
        return true;
    }

    int dfs(TreeNode* root,vector<int>& digits,int& result){
        if(root==NULL){
            return 0;
        }
    digits[root->val]++;
    if(root->left==NULL && root->right==NULL){
        if(ispalindrome(digits)){
            result++;
        } 
    }
    else{
        dfs(root->left,digits,result);
        dfs(root->right,digits,result);
    }
    digits[root->val]--;
    return result;
    }

public:
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>digits(10,0);
        int result=0;
        dfs(root,digits,result);
        return result;
    }
};