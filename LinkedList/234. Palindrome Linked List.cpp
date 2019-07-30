#include "LinkedList.h"
#include <iostream>
using namespace std;

class Solution{
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head, *fast = head,  *prev = nullptr;
        while (fast){//find mid node
            slow = slow->next;
            fast = fast->next ? fast->next->next: fast->next;
        }
        while (slow){//reverse
            ListNode* ovn = slow->next;
            slow->next = prev;
            prev = slow;
            slow = ovn;
        }
        while (head && prev){//check
            if (head->val != prev->val){
                return false;
            }
            head = head->next;
            prev = prev->next;
        }
        return true;
    }
};

int main(){
    ListNode *head = nullptr;

    Solution sol;
    cout << sol.isPalindrome(head) << endl;
}
