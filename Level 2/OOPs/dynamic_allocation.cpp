#include <iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;
};

int main(){
    //static allocation
    Hero a;
    a.health = 60;
    cout<<a.health<<endl;

    //dynamic allocation
    Hero *h = new Hero;
    (*h).health = 80;
    h->level = 'a';
    cout<<(*h).health<<endl;
    //or
    cout<<h->health<<endl;
    cout<<h->level<<endl;
}