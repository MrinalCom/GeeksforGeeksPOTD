 Node *result=head;
        Node *curr=head;
        Node *tmp=new Node(data);
        Node *prev=NULL;
        
        // node at start
        if(curr->data >= data){
            tmp->next=curr;
            curr=tmp;
            return curr;
        }
        // getting correct position
        while(curr->data <= data && curr->next != NULL){
            prev=curr;
            curr=curr->next;
        }
        // node at end 
        if(curr->data <= data){
            curr->next=tmp;
        }
        // node at middle
        else{
            prev->next=tmp;
            tmp->next=curr;
        }
        
        return result;
