#include <iostream>

using namespace std;

bool isSorted(int arr[], int n){
    if(n==0||n==1) return true;
    else if(arr[0]>arr[1]) return false;
    else return isSorted((arr+1),n-1);
}

int main(){
    int arr[10]={1,2,3,4,5,6,78,90,91,92};
    int n=10;
    if(isSorted(arr,n)){
        cout<<"sorted"<<endl;
    }else{
        cout<<"not sorted"<<endl;
    }
}