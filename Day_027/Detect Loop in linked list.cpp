class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        map<Node*,int> distinctNode;
        while(head!=NULL){
            head =head->next;
            if(distinctNode[head]==1)
                return 1;
            distinctNode[head]=1;
        }
        return 0;
    }
};
