Node* c1,*c2;
        c1=head1;
        c2=head2;
        Node* head = new Node(NULL);
        Node* c=head;
        while(c1&&c2){
            if(c1->data<c2->data)
                c1=c1->next;
            else if(c1->data>c2->data)
                c2=c2->next;
            else{
                Node* n= new Node(c1->data);
                c->next=n;
                c=c->next;
                c1=c1->next;
                c2=c2->next;
            }
        }
        return head->next;
