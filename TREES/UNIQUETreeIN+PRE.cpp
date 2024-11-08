#include<iostream>
using namespace std;
int i=0;
class node{
    public:
    int data;
    node* right;
    node* left;
    node(int data)
    {
        this->data=data;
        this->left=this->right=NULL;
    }
};
buildTree(int* pre,int* in, int s , int e)
{
    if(s>e)
    {
        return NULL;
    }
    int x=pre[i];
    i++;
    node* root = new node(x);
    int k=s;
    while(in[k]!=x){
        k++;
    }
    root->left = buildTree(pre,in,s,k-1);
    root->right = buildTree(pre,in,k+1,e);
    return root;
}
int main()
{
    int pre[]={10,20,40,50,70,30,60};
    int in[]={40,20,70,50,10,30,60};
    int n = sizeof(in)/sizeof(int);
    node* root = buildTree(pre,in,0,n-1);
    printPreOrder(root);
    cout<<endl;
    printInOrder(root);
    cout<<endl;
    printLevelOrder(root);
    cout<<endl;
    return 0;
}