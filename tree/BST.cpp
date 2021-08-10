#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;

    Node*left; Node* right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int val)
{
    if(root==NULL)
    {
        return new Node(val);
    }
    if(val<root->data)
    {
        root->left = insert(root->left,val);
    }else{
        root->right = insert(root->right,val);
    }
    return root;
}
void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    Node* root = NULL;
    root = insert(root,10);
    insert(root,5);
    insert(root,4);
    insert(root,12);
    insert(root,26);
    insert(root,1);
    insert(root,30);
    insert(root,55);
    insert(root,92);
    insert(root,6);
    inorder(root);
    return 0;
}