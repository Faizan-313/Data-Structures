#include <iostream>
using namespace std;

class student{
    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }
};

int main(){
    student s;
    cout<<"This is encapsulation"<<endl;
    return 0;
}