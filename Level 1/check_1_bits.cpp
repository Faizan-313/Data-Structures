#include<iostream>
using namespace std;

int main(){
    unsigned int n;
    cin>>n;
    int count = 0;
    while(n!=0){
        if(n&1){     //bit wise and as 1&1 = 1
            count++;
        }
        n = n>>1;    //right shift until it becomes = 0
    }
    cout<<count<<endl;
}