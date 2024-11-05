#include <iostream>
using namespace std;

void selection(int *arr,int i, int n){
    if(i==n-1) return;
    else{
        int minIndex = i;
        for(int k =i;k<n;k++){
            if(arr[k]<arr[minIndex]){
                minIndex = k;
            }
        }swap(arr[i],arr[minIndex]);
        return selection(arr,i+1,n);
    }
}

int main(){
    int arr[5] = {29, 10, 14, 37, 13};
    selection(arr,0,5);
    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
