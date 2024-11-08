 #include<iostream>
 using namespace std;
 class node
 {
     public:
     int data;
     node * next; 
     node(int data)
     {
         this->data = data;
         this->next = NULL;
     }
     
     
 };

  void insertathead(node*& head,int data)
     {
       node* n= new node(data);
       n->next = head;
       head = n; 
     }
     void printlist(node* head)
     {
         while(head!=NULL)
         {
             cout<<head->data<<" ";
             head=head->next;
         }
         cout<<endl;
     }
node* getTail(node* head)
 {
       node* temp = head;
       while(temp->next != NULL){
           temp=temp->next;
       }
       return temp; 
 }
     void insertattail(node*& head,int data)
     {
         if(head==NULL){
             insertathead(head,data);
             return;
         }
          node* n = new node(data);
          node* tail= getTail(head);
          tail->next=n;
     }
      node* getNode(node* head,int j){
          int k=0;
          node* temp= head;
          while(k<j && temp)
          {
              temp=temp->next;
              k++;
          }
          return temp;
      }
     void insertatindex(node*& head,int data , int i)
     { 
         if(i==0){
             insertathead(head,data);
         }
        node* n = new node(data);
        node* prev = getNode(head,i-1);
        n->n ext=prev->next;
        prev->next=n;
     }

 int main()
 {
     // INSERTION 
      // 1. INSERTION AT HEAD
          node* head= NULL;

          insertathead(head,50); 
          insertathead(head,40);
          insertathead(head,30);
          insertathead(head,20);
          insertathead(head,10);

       printlist(head);

      // 2. INSERTION AT TAIL

          insertattail(head,60);
          printlist(head);
      // 3. INSERTION AT SPECIFIC INDEX

          insertatindex(head,25,2);
          printlist(head);
 }