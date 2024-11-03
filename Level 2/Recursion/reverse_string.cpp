#include <iostream>
using namespace std;

void reverse(string& str){
    static int i = 0;
    if(i >= str.length()){
        return;
    }else{
        char c = str[i++];
        reverse(str);
        cout<<c;
    }
}

int main(){
    string str = "abcdefghi";
    reverse(str);
}