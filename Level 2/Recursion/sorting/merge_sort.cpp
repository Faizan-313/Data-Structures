//without creating temporary arrays 
//it uses shifting in the main array which increases its time complexity

#include <iostream>
using namespace std;

void merge(int *arr, int s, int e, int mid){
    int s1 = s;
    int s2 = mid+1;
    while(s1<=mid && s2 <= e){
        if(arr[s1]<=arr[s2]) s1++;
        else{
            int value = arr[s2];
            int index = s2;
            while(index>s1){
                arr[index]=arr[index-1];
                index--;
            }arr[s1] = value;
            s1++;s2++;mid++;
        }
    }    
}

void mergeSort(int *arr, int i , int j){
    if(i>=j) return;
    int mid = i+(j-i)/2;

    mergeSort(arr,i,mid);
    mergeSort(arr,mid+1,j);

    merge(arr,i,j,mid);
}


int main(){
    int arr[8] = {29, 10, 14, 37, 13,1,3,2};
    mergeSort(arr,0,7);

    for(int i = 0; i<8;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}