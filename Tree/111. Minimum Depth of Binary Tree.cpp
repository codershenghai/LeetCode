#include <iostream>
#include "Tree.h"
#include <algorithm>
#include <limits.h>
using namespace std;

class Solution{
public:
    int minDepth(TreeNode* root){
        if (root == nullptr)
            return 0;
        if ((root->left == nullptr) && (root->right == nullptr))
            return 1;

        // 初始化最小深度为无穷大
        int min_depth = INT_MAX;
        // 若左子树不为空，更新最小深度
        if (root->left != nullptr)
            min_depth = min(minDepth(root->left), min_depth);
        // 若右子树不为空，更新最小深度
        if (root->right != nullptr)
            min_depth = min(minDepth(root->right), min_depth);

        return min_depth+1;
    }
};


int main(){
    TreeNode *p = new TreeNode(4);
    TreeNode *p1 = new TreeNode(2);
    TreeNode *p2 = new TreeNode(5);
    p->left = p1;
    p->right = p2;

    Solution sol;
    int res = sol.minDepth(p);
    cout << res;
}