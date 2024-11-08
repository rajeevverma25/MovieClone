node* buildBBST(int* A,int s, int e)
{
    if(s>e){
        return NULL;
    }
    int m = s+(e-s)/2;
    node* root = new node(A[m]);
    root->left = buildBBST(A,s,m-1);
    root->right = buildBBST(A,m+1,e);
    return root;
}
int main()
{
    int A[]= {3,5,7,10,13,15,17};
    int n = sizeof(A)/sizeof(int);
    node* root = buildBBST(root);
    cout<<endl;
    return 0;
}