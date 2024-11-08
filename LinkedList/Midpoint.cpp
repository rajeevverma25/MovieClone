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
node* getMidpoint(node* head){
 if(!head){
     return head;
 }
    node* slow=head;
    node* fast=head->next;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main()
{
   
    node* head=NULL;
     insertathead(head,60);
    insertathead(head,50);
    insertathead(head,40);
    insertathead(head,30);
    insertathead(head,20);
    insertathead(head,10);
    printlist(head);
   node* midpoint = getMidpoint(head);
   midpoint? cout<<midpoint->data<<endl:
             cout<<"linked list is empty";
             return 0;

}