class Solution {
public:
    void deleteNode(ListNode* node) {
        auto temp =  node->next;
        *node = *node->next;
        delete temp;
        return;
    }
};
