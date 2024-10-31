#include <iostream>
using namespace std;

/* pattern
* 
* *
* * *

int main(){
    int i = 1;
    while(i<4){
        int j = 0;
        while(j<i){
            cout<<"*"<<" "; j++;
        }
        cout<<endl;i++;
    }
}
*/



/*pattern 
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 

int main(){
    int n;
    cin>>n;

    int i = 1;
    while (i<=n){
        int temp = i,j=0;
        while(j<i){
            cout<<temp<<" ";j++;   // or cout<< i + j-1
            temp--;
        }
        i++;
        cout<<endl;
    }
}

*/



/*pattern
    *
   **
  ***
 ****
*****

int main(){
    int n;
    cin>>n;

    int i =1;
    while(i<=n){
        int j = 0;
        while(j<n-i){
            cout<<" ";
            j++;
        }
        int k = 0;
        while(k<i){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
}

*/


