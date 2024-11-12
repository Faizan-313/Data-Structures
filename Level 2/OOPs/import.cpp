#include <iostream>
using namespace std;
#include "Hero.cpp"

int main(){
    Hero h1;
    h1.health = 70;
    h1.name = "Paul";
    h1.setlevel('A');
    cout<<h1.health<<endl<<h1.getlevel()<<endl<<h1.name<<endl;
}