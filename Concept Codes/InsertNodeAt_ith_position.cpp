void insertnode(Node* head, int i, int data){
    int count = 0;
    Node* temp = head;
    while(count <= i - 1){
        
        temp = temp -> nextadd;
    }
    
    Node* addnewnode = new Node(data);
    addnewnode -> nextadd = temp -> nextadd;
    temp -> nextadd = addnewnode;
        
}
