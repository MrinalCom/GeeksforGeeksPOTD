
class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
       reverse(head);
        
        Node *curr = head;
        while (curr -> next) {
            if (curr -> data > (curr -> next -> data)) {
                Node *node = curr -> next;
                curr -> next = node -> next;
                delete node;
            } else {
                curr = curr -> next;
            }
        }
        
        reverse(head);
        return head;
        
    }
    
};
