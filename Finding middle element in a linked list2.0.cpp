int getMiddle(Node *head)
{
    Node* fast=head,*slow=head;
    if(!head) return -1;
    while(fast and fast->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}