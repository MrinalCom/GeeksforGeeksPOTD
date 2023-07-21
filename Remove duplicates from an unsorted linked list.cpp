unordered_set<int>s;
     Node *temp=head,*prev;
     while(temp){
         
        if(s.find(temp->data)==s.end()){
            s.insert(temp->data);
           
        }
        else{
        
        while( temp && s.find(temp->data)!=s.end()) temp=temp->next;
        if(temp==NULL){
        prev->next=temp;
       return head;}
        
        
        else{
            prev->next=temp;
            s.insert(temp->data);
        }
        }
        prev=temp;
      if(temp)
         temp=temp->next;
     }
     return head;
