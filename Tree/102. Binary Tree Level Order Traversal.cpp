#include <iostream>
#include <vector>
#include <queue>
#include "Tree.h"
using namespace std;


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root)
            return ans;

        queue<TreeNode*> Q;
        Q.push(root);

        while (!Q.empty()){
            vector<int> tmp;
            int width = Q.size();

            // 将当前层的节点的值放到一维数组tmp中
            for (int i = 0; i < width; i++){
                TreeNode* p = Q.front();
                Q.pop();
                tmp.push_back(p->val);
                if (p->left)
                    Q.push(p->left);
                if (p->right)
                    Q.push(p->right);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};


int main(){

    //expectation: [[0],[1,2],[3,4]]
    TreeNode *p = new TreeNode(0);
    TreeNode *p1 = new TreeNode(1);
    TreeNode *p2 = new TreeNode(2);
    TreeNode *p3 = new TreeNode(3);
    TreeNode *p4 = new TreeNode(4);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = nullptr;
    p2->left = nullptr;
    p2->right = p4;

    Solution sol;
    vector<vector<int>> ans = sol.levelOrder(p);

    return 0;
}