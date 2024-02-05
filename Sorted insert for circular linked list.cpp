Node* n = new Node(data);
        Node* temp = head;
        
        //THE CASE WE DON'T HAVE ANYTHING IN LINKED LIST
        if(head == NULL)
        {
            n -> next = n;
            return n;
        }
        
        //Check if the data is greater
        while(temp -> next != head && temp -> next -> data < data)
        {
            temp = temp -> next;
        }
        
        n ->next = temp -> next;
        temp -> next = n;
      
        
         if(head -> next -> data < head -> data){
                swap(head -> data, head -> next -> data);
            }
            return head;
