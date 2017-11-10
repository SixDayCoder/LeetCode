/*
URL:https://leetcode.com/problems/diameter-of-binary-tree/description/
描述:一棵树中相距最远的两个子节点之间的距离记作这棵树的直径
提示:简单,左树高+右树高
*/

class Solution {
public:
	int heightOfBinartTree(TreeNode* root) {
		if (root == nullptr) return 0;
		int lheight = heightOfBinartTree(root->left);
		int rheight = heightOfBinartTree(root->right);
		return  std::max(lheight, rheight) + 1;
	}

	int diameterOfBinaryTree(TreeNode* root) {
		if (root == nullptr) return 0;
		int diameter = heightOfBinartTree(root->left) + heightOfBinartTree(root->right);
		return std::max(diameter, std::max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)));
	}
};
