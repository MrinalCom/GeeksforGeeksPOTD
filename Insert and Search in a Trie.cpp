TrieNode *p=root;
            for(auto x: s) {
                int ind=x-'a';
                if(p->children[ind]==0) return 0;
                p=p->children[ind];
            }
            return p!=NULL && p->isLeaf==1;
