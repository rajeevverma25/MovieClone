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
    queue<node*> q;
    int rootData;
    cin>>rootData;
    node* root = new node(rootData);
    q.push(root);
    while(!q.empty()){
        node* front = q.front();
        q.pop();
        int leftData;
        cin>>leftData;
        if(leftData!=-1)
        {
            node* leftChild = new node(leftData);
            front->left=leftChild;
            q.push(leftChild);
        }
        int rightData;
        cin>>rightData;
        if(rightData!=-1)
        {
            node* rightChild = new node(rightData);
            front->right=rightChild;
            q.push(rightChild);
        }
    }
}
int main(){
    node* root = NULL;
    root = buildTree();
    printLevelOrder(root);
    cout<<endl;
    return 0;
}