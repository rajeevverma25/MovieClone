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
class triple{
    public:
    bool isBST;
    int maxData;
    int minData;
};
triple checkBSTEfficient(node* root)
{
    if(!root)
    {
        t.isBST= true;
        t.maxData = INT_MIN;
        t.minData = INT_MAX;
        return t;
    }
  triple t;
   triple tl = checkBSTEfficient(root->left);
   triple tr= checkBSTEfficient(root->right);
   bool Z = root->data> tl.maxData &&
            root->data < tr.minData ? true:false;
            t.isBST = tl.isBST && pr.isBST && Z;
            t.maxData = max({tl.maxData, root->data, tr.maxData});
            t.minData = min({tl.minData, root->data, tr.minData});
            return t;
}
bool checkBSTUsingRange(node* root,int lb,int ub){
    if(!root)
    {
        return true;
    }
    return root->data>lb && root->data<ub &&
    checkBSTUsingRange(root->left,lb,root->data) &&
    checkBSTUsingRange(root->right,root->data,ub);
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
    triple t = checkBSTEfficient(root);
      t.isBST ? cout<<"true"<<endl;
                     cout<<"false"<<endl;
    int lb = INT_MIN;
    int ub = INT_MAX;
    checkBSTUsingRange(root,lb,ub)? cout<<"true":cout<<"false"<<endl;
    return 0;
}