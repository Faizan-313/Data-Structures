#include <iostream>
using namespace std;

class animal{
    public:
    int age;

    void bark(){

    }
};

class human{
    public:
    string color;

    void speak(){

    }
};

//multiple ingeritance

class hybrid: public animal, public human{

};

int main(){
    hybrid h1;
    h1.bark();
    h1.speak();
}