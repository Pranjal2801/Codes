#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* nextadd;
    
    Node(int data){
        this -> data = data;
        nextadd = NULL;
    }
};
// namespace std;

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> nextadd;
    }
}

Node* takeInput(){
    int data;
    cin >> data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data != -1){
        Node* address = new Node(data);
        if(head == NULL){
            head = address;
            tail = address;
        }
        
        else{
            tail -> nextadd = address;
            tail = tail -> nextadd;
        }
        cin >> data;
    }
    //cin >> data
    return head;
}

int main(){
    Node* head = takeInput();
    print(head);
}
