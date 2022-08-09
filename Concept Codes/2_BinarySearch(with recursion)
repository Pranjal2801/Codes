int binarybinary(int input[], int si, int ei, int x){
    if(si > ei){
        return -1;
    }
    
    int mid = (si+ei)/2;
    
    if(input[mid] == x){
        return mid;
    }
    
    else if(input[mid] < x){
        binarybinary(input, mid+1, ei, x);
    }
    
    else{
        binarybinary(input, si, mid-1, x);
    }
}

int binarySearch(int input[], int size, int element) {
    int ans = binarybinary(input, 0, size, element);
    return ans;

}
