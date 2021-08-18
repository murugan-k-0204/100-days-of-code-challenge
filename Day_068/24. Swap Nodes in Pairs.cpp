class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode **dummy = &head, *a , *b;
        while((a= *dummy) && (b = a->next)){
            a->next = b->next;
            b->next = a;
            *dummy = b;
            dummy = &a->next;
        }
        return head;
    }
};
