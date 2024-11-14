#include <iostream>
using namespace std;

class a{
    public:
    void call(){
        cout<<"a"<<endl;
    }
};

class b{
    public:
    void call(){
        cout<<"b"<<endl;
    }
};

class c: public a, public b{

};

int main(){
    c c1;
    c1.a::call();
    c1.b::call();
}