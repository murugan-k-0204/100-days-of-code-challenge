class Solution {
public:
    ListNode* front;
    bool isPalindrome(ListNode* head) {
        front = head;
        return check(head);
    }
    bool check(ListNode* last){
        if(last == NULL) return true;
        bool isSame = check(last->next) & (last->val == front->val);
        front = front->next;
        return isSame;
    }
};