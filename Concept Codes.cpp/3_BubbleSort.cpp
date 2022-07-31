#include <iostream>
using namespace std;

void bubblesort(int arr[], int n){
    int si = 0;
    int ei = n-1;
    
    while(si<ei){
        for(int i = si; i < ei; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
        ei--;
    }
}

int main(){
    int arr[6] = {5,1,-2,6,-2,2};
    bubblesort(arr, 6);
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
}
