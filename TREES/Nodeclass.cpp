#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
void printPreOrder(node* root)
{
    if(!root){
      cout<<-1<<" ";
      return;
    } 
    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}
void printInOrder(node* root)
{
    if(!root){
        cout<<-1<<" ";
        return;
    }
    printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);
}
void printPostOrder(node* root)
{
    if(!root){
        cout<<-1<<" ";
        return;
    }
    printPostOrder(root->left);    
    printPostOrder(root->right);
    cout<<root->data<<" ";
}
int main(){
    node* root = NULL;
    root = new node[10];
    root->left = new node[20];
    root->right = new node[30]; 
    root->left->left = new node[40];
    root->left->right = new node[50];
    root->right->left = new node[60];
    root->left->right->left = new node[70];
    printPreOrder(root);
    cout<<endl;
    printInOrder(root);
    cout<<endl;
    printPostOrder(root);
    return 0;
}