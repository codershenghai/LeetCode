#include "Tree.h"
#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int maxDepth(TreeNode* root) {
        // 递归终止条件：当树为空的时候返回0
        if (!root) return 0;

        // 本级递归：计算树的最大深度
        int left_depth = maxDepth(root->left);
        int right_depth = maxDepth(root->right);

        // 返回值：选择较大的子树的深度，然后加1
        return max(left_depth, right_depth) + 1;
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
    cout << sol.maxDepth(p);
}