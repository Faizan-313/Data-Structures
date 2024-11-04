#include <iostream>
using namespace std;

void insertion(int *arr, int s, int n){
    if(n==1 || n==0) return;
    if(s>=n) return;
    else{
        int key=arr[s];
        int i = s-1;
        while(i>=0 && key<arr[i]){
            arr[i+1]=arr[i];
            i--;
        }arr[i+1] = key;
        return insertion(arr,s+1,n);
    }
}

int main(){
    int arr[8] = {29, 10, 14, 37, 13,1,3,2};
    insertion(arr,1,8);

    for(int i = 0; i<8;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}