int findMaximum(node* root){
    if(!root){
    return INT_MIN;
    }
    while(root->right)
    {
        root= root->right;
    }
    return root->data;
}
int findMinimum(node* root){
    if(!root){
     return INT_MAX;
    }
    while(root->left)
    {
        root= root->left;
    }
    return root->data;
}
bool checkBST(node* root)
{    
    if(!root)
    {
        return true;
    }
    bool X = checkBST(root->left);
    bool Y = checkBST(root->right);
    bool Z= root->data>findMaximum(root->left) &&
            root->data < findMinimum(root->right)? true:false;
            return X && Y && Z
}
int main()
{
    node* root= new node(10);
    root->left = new node(5);
    root->left->left = new node(3);
    root->left->right = new node(7);
    root->right = new node(15);
    root->right->left = new node(3);
    root->right->right = new node(7);
    checkBST(root)? cout<<"true"<<endl;
                     cout<<"false"<<endl;
}