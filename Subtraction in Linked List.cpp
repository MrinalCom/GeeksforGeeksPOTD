  Node* rev(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr){
            next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
    Node* trim(Node* head){
        while(head&&head->next&&head->data==0){
            head=head->next;
        }
        return head;
    }
    int size(Node* head){
        int s = 0;
        while(head){
            s++;
            head=head->next;
        }
        return s;
    }
    bool isGreator(Node* h1,Node*h2){
        while(h1&&h1->data==h2->data){
            h1=h1->next;
            h2=h2->next;
        
        }
        if(h1&&h1->data<h2->data){
            return false;
        }
        return true;
    }
