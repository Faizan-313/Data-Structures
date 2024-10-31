#include<iostream>
using namespace std;

int binary_s(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;  // so that it will always remain in the range of the int as if both start and end are INT_MAX then by adding
                                        // directely them then it will be outside the range of the int.
    while(start <= end){
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            start = mid +1;
        else
            end = mid -1;
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int even[6] = {3,7,11,13,19,27};
    int odd[5] = {3,8,11,12,18};
    int n = 6;
    int m = 5;
    int key1,key2;
    cin>>key1>>key2;
    cout<<"index in first array: "<< binary_s(even,n,key1)<< endl;
    cout<<"index in second array: "<<binary_s(odd,m,key2)<<endl;
}