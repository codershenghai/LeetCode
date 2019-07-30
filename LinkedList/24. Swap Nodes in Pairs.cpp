#include "LinkedList.h"
#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // 终止条件
        if (!head || !head->next)
            return head;

        // 找返回值，以及本级递归应该做什么
        // 只考虑本级递归，链表其实就3个节点，分别是head, p, swapPairs(p->next)，交换这三个节点就好了
        ListNode *p = head->next;
        head->next = swapPairs(p->next);
        p->next = head;
        return p;
    }
};


int main(){
    ListNode *head = new ListNode(1);
    addTail(head, 2);
    addTail(head, 3);
    addTail(head, 4);

    Solution sol;
    ListNode *p = sol.swapPairs(head);
    while (p){
        cout << p->val << ' ';
        p = p->next;
    }
}