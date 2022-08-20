Node *deleteNode(Node *head, int pos){
    int count = 0;
    Node* temp = head;
    
    if(head == NULL){         //-------SPECIAL CASE-------//
        return head;
    }
    
    if(pos == 0){
        head = head -> next;
        //delete temp;
        return head;
    }
    
    while(temp != NULL && count < pos - 1){
        temp = temp -> next;
        count++;
    }

    if(temp == NULL || temp -> next == NULL){
        return head;
    }
    
    temp -> next = temp -> next -> next;
    return head;
}
