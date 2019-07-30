#include "LinkedList.h"
#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *pre = dummy, *p = head;
        while (p){
            if (p->val == val){
                pre->next = p->next;
                delete(p);
                p = pre->next;
            }
            else{
                p = p->next;
                pre = pre->next;
            }
        }
        return dummy->next;
    }
};

int main(){
    ListNode *head = new ListNode(1);
    addTail(head, 2);
    addTail(head, 3);
    addTail(head, 2);
    addTail(head, 11);


    Solution sol;
    ListNode *h = sol.removeElements(head, 1);

    ListNode *p = h;
    while (p){
        cout << p->val << " " << endl;
        p = p->next;
    }
}