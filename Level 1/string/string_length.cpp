#include <iostream>
using namespace std;

int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    int len = 0;
    int i =0;
    while(name[i] != '\0'){
        len++;
        i++;
    }
    cout <<"length of your name is: "<<len<<endl;
}