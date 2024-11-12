#include <iostream>
#include <cstring>
using namespace std;

class Hero{
    public:
    char *name;
    int health;
    char level;

    Hero(){
        name = new char[1000];
    }
    void print(){
        cout<<this->name<<endl;
        cout<<health<<endl;
        cout<<level<<endl;
    }

    void setname(char name[]){
        strcpy(this->name , name);
    }
};

int main(){
    Hero h1;
    h1.health = 60;
    h1.level = 'A';
    char name[7] = "Faizan";
    h1.setname(name);
    h1.print();

    //use default create one more hero
    Hero h2(h1);
    //or
    // Hero h2 = h1;
    h2.print();
    h1.name[0] = 'f';
    h1.print();

    //as we changed only the h1 but when we will execute the below line it will print faizan for h2 also
    h2.print();
}