#include <iostream>
using namespace std;

class Hero{
    public:
    int level;

    ~Hero(){
        cout<<"Destructor";
    }
};

int main(){
    //static
    Hero h;
    h.level = 80;

    //dynamic
    Hero *h1 = new Hero();
    //manually call for the dynamic allocated memeory as it does not call automatically for the dynamic
    delete h1;
}