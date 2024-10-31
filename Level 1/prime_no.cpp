#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i =2; i<(n/2)+1;i++){
        if(n%i == 0){
            cout<<"Not a prime no."<<endl;
            return 0;
        }
    }
    cout<<"Prime number"<<endl;
    return 1;
}