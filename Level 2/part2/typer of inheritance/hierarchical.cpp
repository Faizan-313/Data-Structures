#include <iostream>
using namespace std;

class a{
    public:
    void func1(){
        cout<<"a";
    }
};
class b: public a{
    public:
    void f2(){
        cout<<endl<<"b";
    }
};
class c: public a{
    public:
    void f3(){
        cout<<endl<<"c";
    }
};

int main(){
    a a1;
    a1.func1();

    b b1;
    b1.func1();
    b1.f2();

    c c1;
    c1.func1();
    c1.f3();
    return 0;
}