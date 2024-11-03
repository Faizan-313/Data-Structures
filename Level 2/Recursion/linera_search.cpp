#include <iostream>
using namespace std;

bool search(int arr[], int n, int element){
    if(n==0) return false;
    else if(element == arr[0]) return true;
    else return search(arr+1,n-1,element);
}

int main(){
    int n = 6;
    int arr[6] = {1,2,3,4,5,6};
    int element;
    cin>>element;

    if(search(arr,n,element)){
        cout<<"Found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
}