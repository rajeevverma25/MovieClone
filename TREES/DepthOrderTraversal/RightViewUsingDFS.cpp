int maclevel=-1;
void printRightViewRecursive(node* root)
{
    if(!root)
    {
        return ;
    }
    if(maxlevel<level){
          cout<<root->data<<" ";
          maxlevel=level;
    }
    printRightViewRecursive(root->left,level+1);
    printRightViewRecursive(root->left,level+1)` ;
}