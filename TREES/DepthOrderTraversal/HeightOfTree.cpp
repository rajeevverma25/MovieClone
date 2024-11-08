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

node* mirrorTree(node* root) {
    if (!root) {
        return root;
    }
    
    root->left = mirrorTree(root->left);
    root->right = mirrorTree(root->right);
    
    swap(root->left, root->right);
    return root;
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
int main() {
    node* root = buildTree();
    cout<<computeHeight(root)<<endl;
    printPreOrder(root);  
    return 0;
}