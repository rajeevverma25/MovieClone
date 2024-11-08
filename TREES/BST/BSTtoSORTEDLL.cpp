#include<iostream>
#include<climit>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
class Pair{
    public:
    node* head;
    node* tail;
};
Pair transform(node* root)
{
    if(!root)
    {
        p.head=p.tail=NULL;
    }
    Pair p;
    Pair pl=transform(root->left);
    if(pl.head!=NULL){
      pl.tail->right = root;
      p.head=pl.head;
    }else{
        p.head = root;
    }
    
    Pair pr= transform(root->right);
    if(pr.head!=NULL)
    {
       root->right = pr.head;
       p.tail= pr.tail;
    }else{
        p.tail=root;
    }
   return p;

}
void printLinkedList(node* head)
{
    while(head){
    cout<< head->data<<" ";
    head = head->right;
    }
    cout<<endl;
}
int main()
{
    node* root = new node(10);
    root->left = new node(5);
    root->left->left= new node(3); 
    root->left->right = new node(7);
    root->right = new node(15);
    root->right->left = new node(13);
    root->right->right = new node(17);
    Pair p = transform(root);
    return 0;
}