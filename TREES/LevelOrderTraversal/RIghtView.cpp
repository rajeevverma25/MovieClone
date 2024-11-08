 #include<iostream>
 using namespace std;
 #include<queue>
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
 node* buildTree()
 {
     int data;
     cin>>data;
     if(data==-1)
     {
         return NULL;
     }
     root->left= buildTree();
     root->right=buildTree();
     return root;
 }
 void printRightView(node* root)
 {
     queue<node*> q;
     q.push(root);
     q.push(NULL); 
     while(!q.empty())
     { 
       node* front = q.front();
       q.pop();
       if(!front)
       {
           if(!q.empty())
           {
               q.push(NULL)
           }
       }else{
           if(q.front==NULL){
             cout<<front->data<<" ";
           }
           
           if(front->left){
               q.push(front->left);
           }
           if(front->right)
           {
               q.push(front->right);
           }
       }
     }
 }
       int main(){
           node* root = buildTree();
       }