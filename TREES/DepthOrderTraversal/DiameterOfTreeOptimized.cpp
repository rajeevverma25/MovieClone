#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
      this->data=data;
      this->left=this->right=NULL;
    }
};
node* buildTree(){
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    node* root= new node(data);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}
int computeHeight(node* root)
{
    
     if(!root)
    {   return -1;
    }
    int X=computeHeight(root->left);
    int Y = computeHeight(root->right);
    return 1 + max(X,Y);
}
int computeDiameter(node* root)
{
     if(!root){
      return 0;
     }   
    
    int dl= computeDiameter(root->left);
    int dr=computeDiameter(root->right);
    int hl=computeHeight(root->left);
    int hr=computeHeight(root->right);
    int lr=hl+hr+2;
    return max({dl,dr,lr});  // used curly braces coz had to enter more than 2 parameters inside a math function which is not allowed without using braces
}
class Pair{
    public:
    int diameter;
    int height;
};
Pair computeDiameterEfficient(node* root)
{
    Pair p;

if(!root){
    p.diameter=0;
    p.height= -1;
    return p;
}
Pair pl= computeDiameterEfficient(root->left);
Pair pr = computeDiameterEfficient(root->right);
int lr = pl.height + pr.height + 2;
p.diameter()= max({pl.diameter , pr.diameter,lr});
p.height = 1+ max(pl.height , pr.height);
return p; 
}
int main()
{
  node* root=buildTree();
  cout<<computeDiameter(root)<<endl;
  int p=computeDiameterEfficient(root);
  cout<<p.diameter;
  return 0;
}