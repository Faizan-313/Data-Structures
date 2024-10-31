#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n = 9;
    long count = 0;
    int num = n;
    if(num == 0)
        return 1;


    while(num != 0){
        num = num>>1;
        count++;
    }
    long a = (pow(2,count))-1;
    int answer = n^a;
    cout<<answer;
}

/*or

    instead of while loop counting the bits we can write
        int MSB = log2(num) + 1;   

    and instead of using the pow function we can write
        return ((1 << MSB) - 1) ^ num;

*/