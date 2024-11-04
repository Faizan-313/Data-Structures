#include <iostream>
using namespace std;

void merge(int *arr, int s,int e, int mid){
    int len1 = mid - s +1;
    int len2 = e-mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    int p = s;
    for(int i =0; i<len1;i++){
        arr1[i]=arr[p++];
    }

    for(int i =0; i<len2;i++){
        arr2[i]=arr[p++];
    }

    int i = 0,j=0,k=s;
    while (i<len1 && j<len2)
    {
        if(arr1[i]<arr2[j]){
            arr[k++] = arr1[i++];
        }else{
            arr[k++] = arr2[j++];
        }
    }
    while(i<len1){
        arr[k++] = arr1[i++];
    }
    while(j<len2){
        arr[k++] = arr2[j++];
    }
    delete []arr1;
    delete []arr2;
}
    


void mergeSort(int *arr,int s, int e){
    if(s>=e) return;
    int mid = s + (e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e,mid);
}

int main(){
    int arr[8] = {29, 10, 14, 37, 13,1,3,2};
    mergeSort(arr,0,7);

    for(int i = 0; i<8;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
