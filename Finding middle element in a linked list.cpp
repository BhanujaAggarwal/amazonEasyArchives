int lengthll(Node* head){
    Node* temp = head;
    int cnt=0;
    while(temp){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int getMiddle(Node *head)
{
    int cnt = lengthll(head);
    cnt/=2;
    while(cnt--){
        head = head->next;
    }
    if(cnt) return head->data;
    return -1;
}
