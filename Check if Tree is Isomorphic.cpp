if(root1==NULL && root2==NULL)
        {
            return true;
        }
        if(root1==NULL || root2==NULL)
        {
            return false;
        }
        if(root1->data != root2->data) 
        {
            return false;
        }
        if(isIsomorphic(root1->left,root2->right) && isIsomorphic(root1->right,root2->left)) 
        {
        return true;
        }
        if(isIsomorphic(root1->left,root2->left) && isIsomorphic(root1->right,root2->right))
        {
            return true;
        }
        return false;
