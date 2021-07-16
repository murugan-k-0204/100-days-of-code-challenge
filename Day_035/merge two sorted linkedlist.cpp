class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode* temp;
        ListNode* head;
        if(l1->val < l2->val){
            head=l1;
            l1 = l1->next;
        }
        else{
            head=l2;
            l2 = l2->next;
        }
        temp = head;
        while(l2!=NULL and l1!=NULL){
            if(l1->val < l2->val){
                temp->next = l1;
                l1 = l1->next;
            }
            else{
                temp->next = l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        if(l1==NULL && l2!=NULL) temp->next = l2;
        else if(l2==NULL && l1!=NULL) temp->next=l1;
        return head;
    }
};
