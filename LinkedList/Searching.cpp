#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
     
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertathead(node*& head,int data)
{
    node* n= new node(data);
    n->next =head;
    head=n;
}
void printlist(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
bool searchlist(node* head,int target)
{
    node* temp=head;
    while(temp)
    {
        if(temp->data==target){
            return true;
        }
        temp=temp->next;
    }
    return false; 
}
bool searchRecursive(node* head,int target){
    if(!head)
    {
        return false;
    }
    if(head->data==target){
        return true;
    }
   return searchRecursive(head->next,target);
}
int main()
{
    // iterative approach
    node* head=NULL;
    insertathead(head,50);
    insertathead(head,40);
    insertathead(head,30);
    insertathead(head,20);
    insertathead(head,10);
    printlist(head);
    int target=30;
    searchlist(head,target)?cout<<"target found":cout<<"target not Found";
    cout<<endl;
     // recursive approach
     target=40;
     searchRecursive(head,target)?cout<<"target found":cout<<"target not Found";

}