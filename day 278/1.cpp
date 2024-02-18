// leetcode:
// 897. Increasing Order Search Tree


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
public:
    void inorder(TreeNode* root, TreeNode* &root2){
        if(root==NULL){
            return;
        }
        inorder(root->left,root2);
        root->left=NULL;
        root2->right=root;
        root2=root;
        inorder(root->right,root2);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* root2=new TreeNode(1);
        TreeNode* ans=root2;
        inorder(root,root2);
        return ans->right;
    }
};
