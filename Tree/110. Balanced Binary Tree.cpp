#include <iostream>
#include "Tree.h"
using namespace std;

// 分别计算左右子树的高度，若高度差小于1，则是平衡二叉树。
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        int diff = abs(maxDepth(root->left)-maxDepth(root->right));
        return (diff==0 || diff==1) && isBalanced(root->left) && isBalanced(root->right);
    }

    // 104. Maximum Depth of Binary Tree
    int maxDepth(TreeNode* node){
        return (!node) ? 0 : max(maxDepth(node->left), maxDepth(node->right)) + 1;
    }
};


int main(){
    TreeNode *p = new TreeNode(1);
    TreeNode *p1 = new TreeNode(2);
    TreeNode *p2 = new TreeNode(1);
    TreeNode *p3 = new TreeNode(3);
    p->left = p1;
    p->right = p2;
    p1->right = p3;

    Solution sol;
    cout << sol.isBalanced(p);
}