#include <iostream>
using namespace std;

void quicksort(int arr[], int si, int ei){
    
    if(si >= ei){
        return;
    }
    
    int num = arr[si];
    int count = 0;

    for(int i = si+1; i <= ei; i++){
        if(arr[i] < num){
            count++;
        }
    }
    
    arr[si] = arr[si+count];
    arr[si+count] = num;
    
    int i = si;
    int j = ei;
    
    while(i < si+count && j > si+count){
        if(arr[i] < num){
            i++;
        }
        
        if(arr[j] > num){
            j--;
        }
        
        else{
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    quicksort(arr, si, si+count-1);
    quicksort(arr, si+count+1, ei);
    
}

int main(){
    int arr[] = {9,7,5,3,1};
    quicksort(arr, 0, 4);
    for(int i = 0; i < 5; i++){
        cout << arr[i];
    }
}
