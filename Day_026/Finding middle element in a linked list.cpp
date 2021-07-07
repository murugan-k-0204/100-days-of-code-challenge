  
int getMiddle(Node *head)
{
   Node* temp= head; 
   Node* mid= head;
   while(mid!=NULL && mid->next!=NULL){
       mid=mid->next->next;
       temp=temp->next;
   }
   return temp->data;
}
