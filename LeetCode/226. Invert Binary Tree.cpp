
/*
URL : https://leetcode.com/problems/invert-binary-tree/description/
描述: 反转二叉树
提示: 找到递归条件递归即可
*/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return nullptr;
        std::swap(root->left, root->right);
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
        
        return root;
    }
};
