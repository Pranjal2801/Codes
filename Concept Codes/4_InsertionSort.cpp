#include <iostream>
using namespace std;

int main(){
    int arr[6] = {5,1,-2,6,-2,2};
    bubblesort(arr, 6);
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
}
