{
    public:
    void rearrange(struct Node *odd)
    {
        //add code here
        if(odd == NULL)
        {
            return;
        }
        Node* firstHead = odd;
        Node* secondHead = NULL;
        Node* currNode = odd;
        Node* prevNode = NULL;
        while(currNode!=NULL)
        {
            Node* NnPointer = NULL;
            Node* NPointer = currNode->next;
            if(NPointer != NULL)
            {
                NnPointer = currNode->next->next;
                currNode->next = NnPointer;
                NPointer->next =secondHead;
                secondHead = NPointer;
            }
            prevNode = currNode;
            currNode = NnPointer;
        }
        prevNode->next = secondHead; 
        return;
    }
};
