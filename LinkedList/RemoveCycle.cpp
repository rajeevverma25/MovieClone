void removecycle(node* head)
{
    node* slow= head;
    node* fast = head;
    while(fast and fast->next){
        sloiw=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
           break; 
        }
    }
    node* prev=head;
    while(prev->next!=fast)
    {
        prev=prev->next;
    }
    slow=head;
    while(slow!=fast)
    {
        prev=prev->next;
        slow=slow->next;
        fast=fast->next;
    }
    prev->next=NULL;
}