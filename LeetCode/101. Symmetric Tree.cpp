
/*
描述: 判断一个二叉树是否是自身对策的
    1
   / \
  2   2
 / \ / \
3  4 4  3
提示:
(1)递归判断左右子树是否值相等,可先将二叉树反转,反转后判断是否为相同的树,这种做法比较耗时间
*/



class Solution {
public:

	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (!p && !q) return true;
		if ((p && q) && p->val == q->val)
			return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
		return false;
	}

	void reverseBinaryTree(TreeNode*& root) {
		if (!root) return;
		std::swap(root->left, root->right);
		reverseBinaryTree(root->left);
		reverseBinaryTree(root->right);
	}

	bool isSymmetric(TreeNode* root) {
		if (!root ) return true;
		if (root && !root->left && !root->right) return true;
		if (root->right && root->left && root->right->val == root->left->val) {
			reverseBinaryTree(root->left);//翻转左子树与右子树比较是否一样
			return isSameTree(root->left, root->right);
		}
		return false;
	}
};


//更好的办法,人为的复制了一颗树,按照相反的路径判断值是否相同,层层递归下去
public bool isSymmetric(TreeNode root) {
    return isMirror(root, root);
}

public bool isMirror(TreeNode t1, TreeNode t2) {
    if (t1 == null && t2 == null) return true;
    if (t1 == null || t2 == null) return false;
    return (t1.val == t2.val)
        && isMirror(t1.right, t2.left)
        && isMirror(t1.left, t2.right);
}