#include <iostream>
using namespace std;

class QueueArray {
    int* data;
    int size;
    int capacity;
    int nextIndex;
    int frontIndex;
    
    public:
    QueueArray(int s){
        data = new int[s];
        nextIndex = 0;
        frontIndex = -1;
        capacity = s;
        size = 0;
    }
    
    void enqueue(int element){

        if(size == capacity){
            cout << "Queue is fulllllllll" << endl;
            return;
        }
        
        
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if(frontIndex == -1){
            frontIndex = 0;
        }
        
        size++;
        
    }
    
    int dequeue(){
        if(size == 0){
            cout << "Queue is already empty" << endl;
            return 0;
        }
        
        int ans = data[frontIndex];
        frontIndex = (frontIndex + 1) % capacity;
        size--;
        return ans;
    }
    
    int front(){
        if(size == 0){
            cout << "Queue is empty" << endl;
            return 0;
        }
        
        return data[frontIndex];
    }
    
    int getSize(){
        return size;
    }
    
    bool isEmpty(){
        return size == 0;
    }
};

int main(){
    QueueArray q(5);
    //cout << "the sizessss is - " << size << endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    
    cout << q.getSize() << endl;
    cout << q.isEmpty() << endl;
}
