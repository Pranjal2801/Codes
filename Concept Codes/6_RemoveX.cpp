#include <iostream>
using namespace std;

void removex(char arr[]){
    if(arr[0] == '\0'){
        return;
    }
    
    if(arr[0] != 'x'){
        removex(arr+1);
    }
    
    else{
        for(int i = 0; arr[i] != '\0'; i++){
            arr[i] = arr[i+1];
        }
        removex(arr);
    }
}

int main(){
    char arr[] = "axbcxxd";
    removex(arr);
    cout << arr;
}
