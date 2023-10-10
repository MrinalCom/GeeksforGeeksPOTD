Node* getTargetNode(Node* root,int target, unordered_map<Node*, Node*> &parent) {
        queue<Node*>q;
        q.push(root);
        
        Node* targetNode = NULL;
        
        while(!q.empty()) {
            Node* temp = q.front();
            q.pop();
            
            if(temp->data == target) targetNode = temp;
            
            if(temp->left) {
                parent[temp->left] = temp;
                q.push(temp->left);
            }
            
            if(temp->right) {
                parent[temp->right] = temp;
                q.push(temp->right);
            }
        }
        return targetNode;
    }
public:

    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        
        unordered_map<Node*, Node*> parent;
        
        vector<int> ans;
        if(!root) return ans;
        
        //get the target node and mark all nodes parent
        Node* targetNode = getTargetNode(root, target, parent);
        
        unordered_map<Node*, bool> visited;
        
        queue<Node*>q;
        q.push(targetNode);
        visited[targetNode] = true;
        
        //BFS till the distance
        while(k) {
            int n = q.size();
            
            for(int i=0;i<n;++i) {
                Node* temp = q.front();
                q.pop();
                
                if(temp->left && !visited[temp->left]) {
                    q.push(temp->left);
                    visited[temp->left] = true;
                }
                if(temp->right && !visited[temp->right]) {
                    q.push(temp->right);
                    visited[temp->right] = true;
                }
                if(parent[temp] && !visited[parent[temp]]) {
                    q.push(parent[temp]);
                    visited[parent[temp]] = true;
                }
            }
            k--;
        }
        
        //the ramaining Queue element is our Answer
        //copying into ans vector
        while(!q.empty()) {
            ans.push_back(q.front()->data);
            q.pop();
        }
        
        //list of the nodes needed in sorted order
        sort(ans.begin(), ans.end());
        return ans;
    }
