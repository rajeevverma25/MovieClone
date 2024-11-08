#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data= data;
        this->right=NULL;
        this->left=NULL;
    }
};
void printPreOrder(node* root)
{
    //base case
    if(!root)
    {
        cout<<-1;
        return;
    }
    // recursive case
    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}
node* buildTree(){
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    node* root = new node(data);
    root->left= buildTree();
    root->right = buildTree();
    return root;
}
int computeSumOfNodes(node* root){
    if(!root){
        return 0;
    }
    int X= computeSumOfNodes(root->left);
    int Y = computeSumOfNodes(root->right);
    return X+Y+root->data;
}
int main(){
    node* root = buildTree();
    cout<<computeSumOfNodes(root)<<endl;
    return 0;
}