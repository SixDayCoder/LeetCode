/*
URL : https://leetcode.com/problems/same-tree/description/
描述: 判断两棵树是否为同一棵树
提示: 递归即可
*/

class Solution {
public:
	bool isSameTree(TreeNode *p, TreeNode *q) {

		if(p == NULL || q == NULL) 
			return (p == q);
		if(p->val == q->val)
			return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
		return false;
	}
};