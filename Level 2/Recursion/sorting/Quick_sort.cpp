#include <iostream>
using namespace std;

int partition(int *arr,int s, int e){
    int count = 0;
    for(int i = s+1; i<=e; i++){
        if(arr[i]<= arr[s]) count++;
    }
    int index = s+count;
    swap(arr[index],arr[s]);
    
    for(int i =s,j=e; i<index && j>index;){
        if(arr[i]>arr[index] && arr[j]<arr[index]) swap(arr[i++],arr[j--]);
        else if(arr[j]>arr[index]) j--;
        else i++;

        //or we can also go by this approach the above approach might break in some inputs

        // while(arr[i]<arr[index]) i++;
        // while(arr[j]>arr[index]) j--;
        // if(i<index && j>index) swap(arr[i++],arr[j--]);
    }
    return index;
}

void quickSort(int *arr, int s, int e){
    if(s>=e) return;

    //partition
    int p = partition(arr, s,e);

    //recursive calls for solving left and right side of pivot.
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main(){
    int arr[8] = {29, 10, 14, 37, 13,1,0,2};
    quickSort(arr,0,7);
    for(int i =0; i<8; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
