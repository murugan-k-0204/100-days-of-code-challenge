class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return 0;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(slow!=fast){
            if(!(fast && fast->next))
                return 0;
            slow = slow->next;
            fast = fast->next->next;
        }
        return 1;
    }
};
