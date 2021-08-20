class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next == NULL || k==0) return head;
        
        int l = 1; 
        ListNode* temp = head;
        while(head->next != NULL){
            head = head->next;
            l++;
        }
        head->next = temp; // make it circular ll
        int move = l - k%l;
        for(int i=0; i< move ; i++){
            
            head = head->next;
            temp = head->next; // new head
        }
        head->next = NULL;// previous to NULL to make it (non circular)
        return temp;
    }
};
