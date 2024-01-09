// 872. Leaf-Similar Trees



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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        std::vector<int> list1;
        std::vector<int> list2;
        recursion(root1, list1);
        recursion(root2, list2);
        return list1 == list2;
    }
    private:
    void recursion(TreeNode* node, std::vector<int>& list) {
        if (node == nullptr) return;
        if (node->right == nullptr && node->left == nullptr) {
            list.push_back(node->val);
            return;
        }
        recursion(node->right, list);
        recursion(node->left, list);
    }
};