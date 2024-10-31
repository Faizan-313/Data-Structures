#include <iostream>
using namespace std;

int main(){
    char name[20];
    cout<<"enter the string: ";
    cin>>name;
    int len = 0;
    int i =0;
    while(name[i] != '\0'){
        len++;
        i++;
    }
    for(int i =0,j=len-1; i<=j;i++,j--){
        swap(name[i],name[j]);
    }
    cout<<"revers string = "<<name<<endl;
}