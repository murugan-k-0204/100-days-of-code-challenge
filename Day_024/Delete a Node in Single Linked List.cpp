Node* deleteNode(Node *head,int x)
{
    if(x==1){
        head = head->next;
        return head;
    }
    int i=2;
    Node* temp = head;
    while(i<x){
        temp=temp->next;
        i++;
    }
    temp->next = temp->next->next;
    return head;
}
