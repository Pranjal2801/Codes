#include <iostream>
using namespace std;

void insertionsort(int arr[], int n){
    for(int i = 1; i < n; i++){             //since we assume the first element is already sorted, therefore we start form i = 1
        int value = arr[i];                 // store value of arr[i]
        int j;
        for(j = i-1; j>=0; j--){            // we use this loop for elements before i uptill i=0
            if(arr[j] > value){            
                arr[j+1] = arr[j];          //if index before(i.e. j has greater value) we shift it by one 
            }
            
            else{
                break;             
            }
        }
        arr[j+1] = value;
    }
}

int main(){
    int arr[6] = {5,1,-2,6,-2,2};
    insertionsort(arr, 6);
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
}
