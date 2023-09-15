Node* sortList(Node *head){
    // Write your code here.
    Node*temp=head;
    vector<int>ans;
    while(temp!=nullptr){
        ans.push_back(temp->data);
        temp=temp->next;
    }
    sort(ans.begin(),ans.end());
    Node*start=new Node(ans[0]);
    Node*w=start;
    int i=1;
    while(i<ans.size())
    {
        Node*me=new Node(ans[i]);
        start->next=me;
        start=me;
        me=me->next;
        i++;
    }
    return w;























}
