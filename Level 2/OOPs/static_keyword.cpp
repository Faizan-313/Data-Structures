#include <iostream>
using namespace std;

class Hero{
    public:
    int health;
    static int timeToComplete;
    void print(){
        cout<<endl<<health<<endl;
    }

    ~Hero(){}
};
int Hero::timeToComplete = 5;

int main(){
    cout<<Hero::timeToComplete<<endl;
}