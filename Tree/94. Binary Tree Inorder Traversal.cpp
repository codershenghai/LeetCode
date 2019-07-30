#include "Tree.h"
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> nums{};
    vector<int> inorderTraversal(TreeNode* root) {
        if (root){
            inorderTraversal(root->left);
            nums.push_back(root->val);
            inorderTraversal(root->right);
        }
        return nums;
    }
};


int main(){
    TreeNode *p = new TreeNode(4);
    TreeNode *p1 = new TreeNode(2);
    TreeNode *p2 = new TreeNode(5);
    p->left = p1;
    p->right = p2;

    Solution sol;
    vector<int> ans = sol.inorderTraversal(p);

    for (int i : ans)
        cout << i << " ";
}
