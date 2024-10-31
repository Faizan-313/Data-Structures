#include <iostream>
using namespace std;

void new_pattern(int);

/* pattern
   1
  121
 12321
1234321

*/


int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 0;
        while(j<n-i){
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=i){
            cout<<k;
            k++;
        }
        k = i;
        while(k>1){
            cout<<k-1;
            k--;
        }
        cout<<endl;
        i++;
    }

    cout<<endl;
    new_pattern(n);
}


/* pattern
12344321
123**321
12****21
1******1
*/

void new_pattern(int n)
{
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        int k =1;
        while(k <= 2*(i-1)){
            cout<<"*";
            k++;
        }
        j--;
        while(j>0){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }

}