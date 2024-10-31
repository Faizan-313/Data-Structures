#include <iostream>
using namespace std;

int main(){
    // int num = 3;
    int *p = &num;
    p = p+1;         // this will chenge the pointer to next integer , if num is at 100 then p will be pointing to 104th location;
    p = p-1;
    cout<<*p<<endl;

    will show error
    int *q = *p;

    int a[] = {1, 2, 3, 4};
    cout << *(a) << " " << *(a+1);
}