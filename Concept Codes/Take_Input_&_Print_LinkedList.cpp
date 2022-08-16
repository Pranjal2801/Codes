#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* nextadd;
    
    Node(int data){               //MADE CONSTRUCTOR
        this -> data = data;
        nextadd = NULL;
    }
}; 

Node* takeInput(){
    int data;
    cin >> data;
    Node* head =  NULL;   //head is NULL right now given the possibilty that user might give only one node
    
    while(data != -1){      //if user doesn't want to enter more nodes, he should write -1 when giving input
    
        Node* newnode = new Node(data);  //make object which has data and nextadd = NULL
        
        if(head == NULL){       //to store address of 1st node in head
            head = newnode;
        }
        
        else{
            Node* temp = head;
            while(temp -> nextadd != NULL){
                temp = temp -> nextadd;
            }
            temp -> nextadd = newnode;
        }
        cin >> data;
    }
    return head;
}

void print(Node* head){
    //Node* temp = head;          //MAKE A COPY OF HEAD SO THAT IT IS NOT LOST
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> nextadd;
    }
}    

int main(){
    Node* head = takeInput();
    print(head);
}
