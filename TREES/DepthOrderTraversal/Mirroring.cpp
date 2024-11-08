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
node* buildTree(){
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    node* root = new node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void printPreOrder(node* root){
    if(!root){
        cout<<-1<<" ";
        return;
    }
    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}
node* mirrorTree(node* root)
{
    //base case
    if(!root)
    {
        return root;
    }
    // recursive case
    //mirror the left sub Tree
    root->left=mirrorTree(root->left);
    //mirror the right sub Tree
    root->right=mirrorTree(root->right);
    //swap both the sub trees
    swap(root->left,root->right);
    return root;
}
int main(){
    node* root= buildTree();
    root=mirrorTree(root);
    printPreOrder(root);
    return 0;
}