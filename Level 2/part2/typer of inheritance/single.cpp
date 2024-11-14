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

int main(){
    Male m1;
    return 0;
}