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
void deleteathead(node*& head){
   if(!head){
       return;
   }
    node* temp=head;
    head=head->next;
    delete temp;

}
void  deleteattail(node* head){
   if(!head){
       return;
   }
   if(!head->next){
       deleteathead(head);
       return;
   }
    node* prev= NULL;
    node* tail= head;
    while(tail->next){
        prev=tail;
        tail=tail->next;
    }
    prev->next=NULL;
    delete tail;
}
node* getNode(node* temp, int j)
{
    int k=0;
    while(k<j && temp!=NULL)
    {
        temp=temp->next;
        k++;
    }
    return temp;
}
void  deleteatindex(node* head,int i){
   if(i==0){
       deleteathead(head);
       return;
   }

    node* cur = getNode(head,i);
    if(!cur){
        return;
    }
    node* prev = getNode(head,i-1);
    prev->next= cur->next;
    delete cur;
}
int main()
{
    node* head = NULL;
     // deletion at head
      insertathead(head,50);
        insertathead(head,40);
        insertathead(head,30);
        insertathead(head,20);
        insertathead(head,10);
        printlist(head);
        deleteathead(head);
        printlist(head);
     // deletion at tail
         deleteattail(head);
         printlist(head);
     // deletion at index
          deleteatindex(head,2);
          printlist(head);
}