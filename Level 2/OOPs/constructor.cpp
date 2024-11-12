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

    //parametrized constructor
    Hero(int health){
        cout<<"parametrized constructor"<<endl;
        this->health = health;
    }
};

int main(){
    Hero a(10);    // will pass to the parametrized contructor
    a.health = 60;
    cout<<a.health<<endl;

    //dynamically
    Hero *b = new Hero(90);
}