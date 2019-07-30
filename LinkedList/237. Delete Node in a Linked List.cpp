#include "LinkedList.h"
#include <iostream>
using namespace std;

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

int main(){
    ListNode *head = new ListNode(1);
    addTail(head, 4);

    Solution sol;
    sol.deleteNode(head);
    cout << head->val << endl;
}
