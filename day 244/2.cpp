// Leetcode:
// 1026. Maximum Difference Between Node and Ancestor
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
    int maxAncestorDiff(TreeNode* root) {
        int m = 0;
        dfs(root, m);
        return m;
    }
    private:
        pair<int, int> dfs(TreeNode* root, int& m) {
        if (root == nullptr) {
            return {INT_MAX, INT_MIN};
        }

        auto left = dfs(root->left, m);
        auto right = dfs(root->right, m);

        int minVal = min(root->val, min(left.first, right.first));
        int maxVal = max(root->val, max(left.second, right.second));

        m = max({m, abs(minVal - root->val), abs(maxVal - root->val)});

        return {minVal, maxVal};
    }
};