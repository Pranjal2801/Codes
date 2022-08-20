Node* insertnode(Node* head, int i, int data){
    Node* addnewnode = new Node(data);
    int count = 0;
    Node* temp = head;
    
    if(i == 0){
        //Node* addnewnode = new Node(data);
        addnewnode -> nextadd = head;
        head = addnewnode;
        return head;
    }
    
    while(temp != NULL && count < i - 1){
        temp = temp -> nextadd;
        count++;
    }
    
    if(temp != NULL){
        addnewnode -> nextadd = temp -> nextadd;
        temp -> nextadd = addnewnode;
    }
    return head;
}
