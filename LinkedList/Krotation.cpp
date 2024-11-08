node* rotateLinkedList(node* head,int k)
{
    node* tail = head;
    while(tail->next !=NULL)
    {
        tail=tail->next;
    }
    tail->next=head;
    node* newTail = head;
    for(int i=0;i<n-(k%n)-1;i++)
    {
        newTail = newTail->next;
    }
    node* newHead = newTail->next;
    newTail->next=NULL;
    return newHead;
}