#include <iostream>
using namespace std;

void reverse(string& str,int i ,int j){
    if(i>=j){
        return;
    }else{
        swap(str[i++],str[j--]);
        reverse(str,i,j);
    }
}

int main(){
    string str = "abcdef";
    reverse(str,0,str.length()-1);
    cout<<str<<endl;
}