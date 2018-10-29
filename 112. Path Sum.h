
/*

URL : https://leetcode.com/problems/path-sum/description/

描述 : 给定一个数问二叉树中是否存在一条路径使得路径上的和是sum


*/

 
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == nullptr) return false;
        if(root->val == sum && root->left == nullptr && root->right == nullptr) return true;
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    }
};
