#include<iostream>
using namespace std;

class a{
    public:
    void say(){
        cout<<"hello"<<endl;
    }

    void say(string name){
        cout<<"hello "<<name<<endl;
    }
};

int main(){
    a a1;
    a1.say();
    a1.say("Faizan");
}