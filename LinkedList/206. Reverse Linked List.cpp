#include "LinkedList.h"
#include <iostream>
using namespace std;

class Solution{
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *p = nullptr, *pre = nullptr;
        while (head) {
            p = head->next;
            head->next = pre;
            pre = head;
            head = p;
        }
        return pre;
    }
};

int main(){
    ListNode *head = new ListNode(1);
    addTail(head, 2);
    addTail(head, 3);
    addTail(head, 4);
    addTail(head, 5);

    Solution sol;
    ListNode *h = sol.reverseList(head);

    ListNode *p = h;
    while (p){
        cout << p->val << " " << endl;
        p = p->next;
    }
}