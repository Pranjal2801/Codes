#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* nextadd;           // it is a pointer of node type which will store address for next node
    
    Node(int data){               //MADE CONSTRUCTOR
        this -> data = data;
        nextadd = NULL;
    }
};

void print(Node* head){
    Node* temp = head;          //MAKE A COPY OF HEAD SO THAT IT IS NOT LOST
    
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> nextadd;
    }
}    

int main(){
    Node n1(5);
    Node n2(4);
    Node n3(3);
    Node n4(2);
    
    Node* head = &n1;
    
    n1.nextadd = &n2;
    n2.nextadd = &n3;
    n3.nextadd = &n4;
    
    print(head);
}

