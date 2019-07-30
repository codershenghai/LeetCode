#include <iostream>
#include "Tree.h"
using namespace std;

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isMirror(root, root);
    }

private:
    bool isMirror(TreeNode *root1, TreeNode *root2){
        if (!root1 && !root2) return true;
        if (!root1 || !root2) return false;
        return root1->val == root2->val && isMirror(root1->right, root2->left)  && isMirror(root1->left, root2->right);
    }
};


int main(){
    //[1,2,2,3,4,4,3]
    TreeNode *p = new TreeNode(1);
    TreeNode *p1 = new TreeNode(2);
    TreeNode *p2 = new TreeNode(2);
    TreeNode *p3 = new TreeNode(3);
    TreeNode *p4 = new TreeNode(4);
    TreeNode *p5 = new TreeNode(4);
    TreeNode *p6 = new TreeNode(3);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;

    Solution sol;
    cout << sol.isSymmetric(p);
}