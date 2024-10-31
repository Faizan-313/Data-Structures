#include <iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    for(int i = 0; i<str.length(); i++){
        if(str[i] == ' '){
            str.replace(i,1,"@40");
            i +=2;
        }
    }cout<<str<<endl;
}