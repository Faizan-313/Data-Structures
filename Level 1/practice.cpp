#include <iostream>
using namespace std;

void _swap(int arr[], int n){
    for(int i=0; i<n-1; i+= 2){
        swap(arr[i],arr[i+1]);
    }
}

int main(){
    int arr[7] = {2,1,4,3,6,5,90};
    int n = 7;
    _swap(arr,n);
    for(int i = 0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
}