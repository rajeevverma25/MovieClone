#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data=data;
        this->left=this->right=NULL;
    }
};
node* findMax(node* root)
{
    if(!root){
        return NULL;
    }
    while(root->right)
    {
        root=root->right;
    }
    return root;
}

node* findMin(node* root)
{
       if(!root){
        return NULL;
    }
 
    while(root->left)
    {
        root=root->left;
    }
    return root;
}
int main()
{
     node* root = new node(10);
    root->left = new node(5);
    root->left->left = new node(3);
    root->left->right = new node(7);
    root->right = new node(15);
    root->right->left = new node(13);
    root->right->right = new node(17);
    node* minNode = findMin(root);
    node* maxNode = findMax(root);
    minNode ? cout<<"minimum data : "<<min
    minNode ? cout<
}