class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* Speed = head;
        ListNode* Slow = head;
        while(Speed!=NULL && Speed->next!=NULL){
            Speed = Speed->next->next;
            Slow = Slow->next;
        }
        return Slow;
    }
};
