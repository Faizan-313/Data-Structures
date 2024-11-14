#include <iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    private:
    int age;

    public:
    int getage(){
        return this->age;
    }

    void setweight(int weight){
        this->weight = weight;
    }
};

class Male: public Human{
    public:
    string color;

    void attack(){
        cout<<"attack"<<endl;
    }
};

int main(){
    Male m1;
    // cout<<m1.age<<endl;   // not accessible as it is private refer to table for other combinations
    cout<<m1.height<<endl;

    cout<<m1.color<<endl;
    m1.attack();
    m1.setweight(71);
    cout<<m1.weight<<endl;
    return 0;
}