#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertathead(node*& head,int data){
    node* n = new node(data);
    n->next=head;
    head=n;
}  
void printlinkedlist(node* head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head= head->next; 
    }
    cout<<endl;
}
class nodecomparator{
    public:
    bool operator()(node* a , node* b)
    {
        return b->data < a->data;
    }
}
node*  mergeKSortedLinkedList(Vector<node*> v){
     
     node* head = new node(0);
     node* temp = head;
     priority_queue<node* , vector<node*> , nodecomparator> minheap(v.begin() , v.end());
     while(!minheap.empty()){
          node* minNode = minheap.top(); minheap.pop();
          temp->next = minNode(;
          temp= temp->next;
          if(minnode->next))
          {
              minheap.push(minNode->next);
          }
     }
     head = head->next;
     return head;
}
int main()
{
    node* head1 = NULL;
    insertathead(head1,5);
    insertathead(head1,3);
    insertathead(head1,1);
    printlinkedlist(head1);

    node* head2 = NULL;
    insertathead(head2,6);
    insertathead(head2,4);
    insertathead(head2,2);
    printlinkedlist(head2);
    
    node* head3 = NULL;
    insertathead(head3,7);
    insertathead(head3,8);
    insertathead(head3,0);
    printlinkedlist(head3);

    vector<node*> v = {head1, head2, head3};

    node* head = mergeKSortedLinkedList(v);
    printlinkedlist(head);
    return 0;
}