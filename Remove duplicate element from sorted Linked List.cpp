Node* temp = head;
    while(temp){
       if(temp->next and temp->data == temp->next->data){
           temp->next = temp->next->next;
       }else temp = temp->next;
    }
    return head;
