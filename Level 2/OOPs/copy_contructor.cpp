#include <iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;
    //constructor
    Hero(){
        cout<<"contructor called"<<endl;
    }

    //create our own instead of default copy constructor
    //default copy constructor will not exit anymore
    Hero(Hero & t){
        cout<<"our own copy constructor called"<<endl;
        this->health = t.health;
        this->level = t.level;
    }

    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }

};

int main(){
    Hero a;
    a.health = 80;
    a.level = 'A';
    a.print();

    //copy constructor is called
    Hero b(a); //copy a's health and level and copy to b's heath and level respectively
    b.print();
}