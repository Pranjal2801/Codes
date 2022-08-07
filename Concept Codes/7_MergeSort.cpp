//I have written 2 codes

void mergesort(int arr[], int si, int ei){
    
    if(si >= ei) {
        return;
    }
    
    int mid = (si+ei)/2;
    
    mergesort(arr, si, mid);
    mergesort(arr, mid+1, ei);
    
    //int total = ei - si + 1;
    int* output = new int[ei-si+1];
    
    //int size1 = mid-si+1;
    //int size2 = ei-mid;
    
    int i = si;
    int j = mid+1;
    int k = 0;
    
    while(i<=mid && j<=ei){                    // MERGE 2 SORTED ARRAY STARTS FROM HERE
        if(arr[i] < arr[j]){
            output[k] = arr[i];
            i++;
            k++;
        }
        
        else{
            output[k] = arr[j];
            j++;
            k++;
        }
    }
    
    while(i<=mid){
        output[k] = arr[i];
        i++;
        k++;
    }
    
    while(j<=ei){
        output[k] = arr[j];
        j++;
        k++;
    }
    int index = 0;
    for(int i = si; i <= ei; i++){
        arr[i] = output[index];
    index++;
    }
    delete [] output;
}

/*void mergesort(int arr[], int si, int ei){
    
    if(si >= ei) {
        return;
    }
    
    int mid = (si+ei)/2;
    
    mergesort(arr, si, mid);
    mergesort(arr, mid+1, ei);
    
    int total = ei - si + 1;
    int* newarr = new int[total];
    
    //int size1 = mid-si+1;
    //int size2 = ei-mid;
    
    int i = si;
    int j = mid+1;
    int k = 0;
    
    while(i<=mid && j<=ei){                    // MERGE 2 SORTED ARRAY STARTS FROM HERE
        if(arr[i] < arr[j]){
            newarr[k] = arr[i];
            i++;
            k++;
        }
        
        else{
            newarr[k] = arr[j];
            j++;
            k++;
        }
    }
    
    while(i<=mid){
        newarr[k] = arr[i];
        i++;
        k++;
    }
    
    while(j<=ei){
        newarr[k] = arr[j];
        j++;
        k++;
    }
    int kiss = 0;
    for(int i = si; i <= ei; i++){
        arr[i] = newarr[kiss];
        kiss++;
    }
    delete [] newarr;
}*/
