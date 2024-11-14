#include <iostream>
using namespace std;

class Human{
    public:
    int weight;
};

class Male: public Human{
    public:
    int age;
};

class boy: public Male{
    public:
    string name;
};

int main(){
    boy b1;
    return 0;
}