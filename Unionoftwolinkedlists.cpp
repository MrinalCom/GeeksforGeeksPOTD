class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here
        map<int,Node*>mp;
        Node* cur=head1;
        while(cur){
            mp[cur->data]=cur;
            cur=cur->next;
        }
        cur=head2;
        while(cur){
            mp[cur->data]=cur;
            cur=cur->next;
        }
        Node* ans=new Node(0),*res=ans;
        for(auto it:mp){
            ans->next=it.second;
            ans=ans->next;
        }
        ans->next=NULL;
        return res->next;
    
    }
};
