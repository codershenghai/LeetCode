#include "Tree.h"
#include <iostream>
using namespace std;

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;
        if (!p || !q) return false;
        if (p->val != q->val) return false;

        bool left = isSameTree(p->left, q->left);
        bool right = isSameTree(p->right, q->right);

        if (left && right) return true;
        else return false;
    }
};


int main(){
    TreeNode *p = new TreeNode(1);
    TreeNode *p1 = new TreeNode(2);
    TreeNode *p2 = new TreeNode(1);
    p->left = p1;
    p->right = p2;


    TreeNode *q = new TreeNode(1);
    TreeNode *q1 = new TreeNode(2);
    TreeNode *q2 = new TreeNode(1);
    q->left = q1;
    q->right = q2;

    Solution sol;
    cout << sol.isSameTree(p, q);
}