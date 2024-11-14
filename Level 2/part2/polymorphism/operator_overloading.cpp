#include<iostream>
using namespace std;

class A{
    public:
    void say(){
        cout<<"hello"<<endl;
    }

};

class B{
    public:
    int a;
    int b;

    void operator+ (B &obj){
        int val = obj.a - this->a;
        cout<<"output "<<val<<endl;
    }

    void operator() (){
        cout<<"mai bracket hoo  "<<this->a<<endl;
    }
};

int main(){
    B obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    obj1();
}