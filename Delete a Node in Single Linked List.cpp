Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(head==NULL)
        return head;
    Node* curr=head;
    Node* prev=NULL;
    int count=1;
    while(curr){
        
        if(count==x){
            if(!prev){
                return curr->next;
            }
            else
                prev->next=curr->next;
                delete curr;
                return head;
        }
        prev=curr;
        curr=curr->next;
        count++;
        
    }
    return head;
}
