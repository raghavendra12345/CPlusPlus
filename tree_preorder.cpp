#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int v)
    {
        data=v;
        left=right=NULL;
    }
};

void Preordertraversal(struct Node* node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";
    Preordertraversal(node->left);
    Preordertraversal(node->right);
    
    
}

int main()
{
    
    struct Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(60);
 
    
    cout <<"Inorder traversal of binary tree is: \n";
    Preordertraversal(root);
    
return 0;
}