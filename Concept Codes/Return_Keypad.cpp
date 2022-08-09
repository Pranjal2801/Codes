#include <iostream>
using namespace std;
string select(int n){
    if(n == 2){
        return "abc";
    }
    
    if(n == 3){
        return "def";
    }
    
    if(n == 4){
        return "ghi";
    }
    
    if(n == 5){
        return "jkl";
    }
    
    if(n == 6){
        return "mno";
    }
    
    if(n == 7){
        return "pqrs";
    }
    
    if(n == 8){
        return "tuv";
    }
    
    if(n == 9){
        return "wxyz";
    }
    return " ";
}

int keypad(int n, string output[]){
    if(n == 0){
        output[0] = " ";
        return 1;
    }
    int singlenum = n%10;
    int smallnum = keypad(n/10, output);
    string s = select(singlenum);
    int size = s.size();
    int l = size - 1;
    
    //int l = s_size - 1;
    //int k = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < smallnum; j++){
            output[i*smallnum + j] = output[j] + s[i];
        } 
        //k++;
    }
    
    return size*(smallnum);
    
}

int main(){
    int n;
    cin >> n;
    string* output = new string[1000];
    int nums = keypad(n, output);
    for(int i = 0; i < nums; i++){
        cout << output[i] << endl;
    }
}
