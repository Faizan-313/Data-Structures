#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a = 0,b=1;
    if(n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<a<<" "<<b;
    }
    else{
        cout<<a<<" "<<b<<" ";
        for(int i = 2; i<n;i++){
            int c = a+b;
            cout<<c<<" ";
            a = b;
            b = c;
        }
    }
}