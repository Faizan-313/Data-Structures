#include <iostream>
using namespace std;

void toWords(int a, string arr[]){
    if(a==0){
        return;
    }else{
        int r = a%10;
        toWords(a/10,arr);
        cout<<r[arr]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    string arr[] = {"zero", "one","two","three","four","five","six","seven","eight","nine"};
    toWords(n,arr);
    cout<<endl;
}