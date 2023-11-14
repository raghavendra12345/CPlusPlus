class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    
    int minValue(Node* node)
    {
    if (node == NULL) {
        return INT16_MAX;
    }
    
    int value = node->data;
    int leftMax = minValue(node->left);
    int rightMax = minValue(node->right);
 
    return min(value, min(leftMax, rightMax));
    }
    
    int maxValue(Node* node)
    {
    if (node == NULL)
    {
        return INT16_MIN;
    }
    
    int value = node->data;
    int leftMax = maxValue(node->left);
    int rightMax = maxValue(node->right);
 
    return max(value, max(leftMax, rightMax));
    }

    bool isBST(Node* root) 
    {
        if(root==NULL)
        return 1;
        
        if(root->left!=NULL && maxValue(root->left)>=root->data)
        return 0;
        
        if(root->right!=NULL && minValue(root->right)<=root->data)
        return 0;
        
        if(!isBST(root->left) || !isBST(root->right))
        return 0;
        
        return 1;
        
    }
    
