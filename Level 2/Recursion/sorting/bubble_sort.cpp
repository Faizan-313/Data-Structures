#include <iostream>
using namespace std;

void sort(int* arr, int n){
    //base case
    if(n<=1) return;
    else{

        //one case solved -- largest element to the right of the array
        for(int i = 0;i<n-1;i++){
            if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
        }

        //remaning part of the array
        return sort(arr,n-1);
    }
}

int main(){
    int arr[10] = {2,1,4,8,3,5,7,9,0,6};
    sort(arr,10);
    for(int i = 0; i<10;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}