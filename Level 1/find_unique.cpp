#include <iostream>
using namespace std;

int main(){
    int arr[11] = {9,1,2,3,1,89,2,3,5,5,9};
    int sum = 0;
    for(int i = 0; i<11;i++){
        sum = sum^arr[i];
    }
    cout<<sum<<endl;
}