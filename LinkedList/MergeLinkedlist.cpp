node* mergeLinkedList(node* head1,node* node2)
{
    if(!head1)
    {
        return head2;
    }
    if(!head2)
    {
        return head2;  
    }
    if(head1->data< head2->data){
        node* head= head1;
        node* headFromFriend = mergeLinkedList(head1->next,head2);
        head->next=headFromFriend;
        return head;
    }
    else{
         node* head= head2;
        node* headFromFriend = mergeLinkedList(head1,head2->next);
        head->next=headFromFriend;
        return head;
    }
}
