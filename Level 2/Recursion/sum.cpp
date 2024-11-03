#include <iostream>
using namespace std;

int sum(int arr[], int n){
    if(n==0) return 0;
    else return arr[0] + sum((arr+1),n-1);
}

int main(){
    int arr[5] = {3,2,5,4,6};
    int n =5;
    cout<<"sum = "<<sum(arr,n)<<endl;
}
