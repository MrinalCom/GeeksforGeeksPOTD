 Node* reverse(Node* r)
    {
        if(!r or !r->next) return r;
        Node* curr = r;
        Node* next = NULL, *prev = NULL;
        while(curr )
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node*sortedmerge(Node*l1,Node*l2){
        if(!l1) return (l2);
        if(!l2) return (l1);
        Node* res = NULL;
        if(l1->data >= l2->data)
        {
            res = l2;
            res->next = sortedmerge(l1,l2->next);
        }
        else
        {
            res = l1;
            res->next = sortedmerge(l1->next,l2);
        }
        return res;
    }
    
    struct Node * mergeResult(Node *head1,Node *head2)
    {
        // your code goes here
        Node*revhead=sortedmerge(head1,head2);
        return reverse(revhead);
    }  
