 bool iscyclepresent(node* head)
 {
     node* slow = head;
     node* fast = head;
     while(fast and fast->next){
         slow=slow->next;
         fast=fast->next->next;
         if(slow==fast)
         {
             return true;
         }
     }
     return false;
 }