struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

void addTail(ListNode *head, int val){
    ListNode *p = head;

    // 移动到最后节点，便于尾插
    while (p && p->next)
        p = p->next;

    p->next = new ListNode(val);
}