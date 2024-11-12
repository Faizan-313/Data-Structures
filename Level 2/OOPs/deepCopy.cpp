#include <iostream>
#include <cstring>
using namespace std;

class Hero{
    public:
    char *name;
    int health;
    Hero(){
        
    }

    void print(){
        cout<<this->name<<endl;
        cout<<health<<endl;
    }

    void setName(char name[]){
        strcpy(this->name , name);
    }

    //copy constructor
    Hero(Hero & temp){
        char *n = new char[strlen(temp.name)+1];
        strcpy(n,temp.name);
        this->name = n;
        this->health = temp.health;
    }
};

int main(){
    Hero h;
    h.health = 80;
    char name[7] = "Faizan";
    h.setName(name);
    // h.print();

    Hero h2(h);
    h.name[0] = 'f';
    h.health = 88;
    // h.print();
    //it does not reflect in the h2 when we change the h because it creates the seperate array for the values of the h2
    // h2.print();

    //copy assignment operator
    //copies the value on the right side and replaces it in the left side
    h = h2;
    h.print();
    h2.print();
}