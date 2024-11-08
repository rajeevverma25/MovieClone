#include<iostream>
#include<queue>
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
void printLevelOrder(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* front = q.front() ;
        q.pop();
        if(!front)
        {
              cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        } 
        cout<<front->data<<" ";
        if(front->left){
            q.push(front->left);
        }
        if(front->right){
            q.push(front->right)
        }
    }
   
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
int main(){
    node* root = NULL;
    root = buildTree();
    printLevel  Order(root);
    cout<<endl;
    return 0;
}