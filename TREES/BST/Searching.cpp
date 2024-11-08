#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data= data;
        this->left=this->right=NULL:
    }
};
bool search(node* root,int key)
{
    if(!root)
    {
        return false;
    }
    if(root->data == key)
    {
        return true;
    }else if(root->data>key)
    {
         return search(root->left, key);
    }
    else{
             return search(root->right, key);
    }
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
    search(root,20)? cout<<"true"<<endl:
                      cout<<"False"<<endl;

    return 0;
}