bool isBST(Node* root) 
    {
        if(root==NULL)
        return 1;
        
        //check if the left side nodes has value greater than the current node
        if(root->left!=NULL && maxValue(root->left)>root->data)
        return 0;
        
        //check if right side node has value less than the current node 
        if(root->right!=NULL && minValue(root->right)<root->data)
        return 0;
        
        //recursively check each of the node
        if(!isBST(root->left) || !isBST(root->right))
        return 0;
        
        //if it passes all of the above case it is a BST.
        return 1;
        
    }