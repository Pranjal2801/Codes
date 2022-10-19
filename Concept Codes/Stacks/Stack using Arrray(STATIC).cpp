#include <iostream>
using namespace std;

class stack{
    int* data;
    int nextIndex;
    int capacity;
    
    public:
    
    stack(int totalsize){
        data = new int[totalsize];
        nextIndex = 0;
        capacity = totalsize;
    }
    
    int size(){
        return nextIndex;
    }
    
    bool isEmpty(){
        return nextIndex == 0;
    }
    
    void push(int value){
        if(nextIndex < capacity){
            data[nextIndex] = value;
            nextIndex++;
        }
        
        else{
            cout << "ho gaya bhai stack full" << endl;
            return;
        }
    }
    
    int pop(){
        if(nextIndex >= 1){
            nextIndex--;
            return data[nextIndex];
        }
        
        else{
            cout << "ho gaya bhai stack EMPTY" << endl;
            return;
        }
    }
    
    int top(){
        if(nextIndex == 0){
            cout << "stack Empty hai bhaiii...kya top karega re tu" << endl;
            return;
        }
        
        return [nextIndex - 1];
    }
};

int main()
{
    cout<<"Hello World";

    return 0;
}

