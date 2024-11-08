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
node* reverselist(node* head){
    node* prev=NULL;
    node* cur= head;
    while(cur){
        node* temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    return prev;
}
node* reverserecursive(node* head)
{ 
    if(!head){
        return head;
    }
    if(!head->next){
        return head;
    }
     
   node* revHead= reverserecursive(head->next);
   node* revTail= head->next;
   revTail->next=head;
   head->next= NULL;
   return revHead;
}
int main()
{
   
    node* head=NULL;
    insertathead(head,50);
    insertathead(head,40);
    insertathead(head,30);
    insertathead(head,20);
    insertathead(head,10);
    printlist(head);
     // iterative approach
    head = reverselist(head);
    printlist(head);
    // Recursive Approach
    head= reverserecursive(head);
     printlist(head);

}