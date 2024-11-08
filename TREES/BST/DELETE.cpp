node* erase(node* root,int key)
{
    if(!root)
    {
        return root;
    }
    if(key<root->data)
    {
        root->left = erase(root->left,key);
    }else if(key>root->data){
        root->right = erase(root->right,key);
    }
    else{
        if(!root->left and !root->right){
            delete root;
            root=NULL;
        }else if(!root->left and root->right){
          node* temp = root->right;
          delete root;
          root = temp;
        }
        else if(root->left and !root>right)
        {
          node* temp = root->left;
          delete root;
          root temp;
        }
        else{
            node* leftMax = findMAx(root->left);
            swap(root->data, leftMax->data);
            root->left = erase(root->left,key);
        }
    }
    return root;
}
int main(){
    node* root = new node(10);
    root->left = new node(5);
    root->left->left = new node(3);
    root->left->right = new node(7);
    root->left->right->right = new node(9);
    root->left->right->right->left  = new node(8);
    printInOrder(root);
    cout<<endl;
    int key=7;
    root=erase(root,key);

} 