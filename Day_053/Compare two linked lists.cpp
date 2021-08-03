// iterative
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    while(head1!=NULL || head2!=NULL){
        if(head1==NULL || head2==NULL)
            return 0;
        if (head1->data!=head2->data) {
            return 0;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return 1;
}
// recursive
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(head1==NULL &&head2==NULL)
        return 1;
    if(head2==NULL || head1==NULL)
        return 0;
    if(head1->data!=head2->data)
        return 0;
    return compare_lists(head1->next, head2->next);
}
