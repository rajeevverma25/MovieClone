#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    node(int data) {
        this->data = data;
        this->left = this->right = NULL;
    }
};

// Predefined input
int input[] = {10, 20, 40, -1, -1, -1, 30, -1, 60, -1, -1};
int index = 0;

node* buildTree() {
    if (index >= sizeof(input) / sizeof(input[0])) {
        return NULL;
    }
    
    int data = input[index++];
    
    if (data == -1) {
        return NULL;
    }
    
    node* root = new node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void printPreOrder(node* root) {
    if (!root) {
        cout << -1 << " ";
        return;
    }
    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}
int computeHeight(node* root){
    if(!root)
    {
        return -1;
    }
    int X=computeHeight(root->left);
    int Y = computeHeight(root->right);
    return max(X,Y)+1;
}
bool checkHeightBalanced(node* root)
{
    if(!root){
        return true;
}    
bool X = checkHeightBalanced(root->left);
    bool Y = checkHeightBalanced(root->right);
    bool Z = abs(computeHeight(root->left)-computeHeight(root->right))<=1 ? true:false;
    return X && Y && Z;
}
int main() {
    node* root = buildTree();
   checkHeightBalanced(root)? cout<<"balanced!"<<endl;
                              cout<<" NOT Balanced!"<<endl;
    return 0;
}