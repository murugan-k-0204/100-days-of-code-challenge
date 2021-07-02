class Solution{
  public:
    Node *insertAtBegining(Node *head, int x) {
        Node* temp = head;
        head =new  Node(x);
        head->next = temp;
        return head;
       
    }
    Node *insertAtEnd(Node *head, int x)  {
       Node* temp = head;
       if(temp==NULL){
           head = new Node(x);
           return head;
       }
       while(temp->next!=NULL)
           temp=temp->next;
       temp->next= new Node(x);
       return head;
    }
};
