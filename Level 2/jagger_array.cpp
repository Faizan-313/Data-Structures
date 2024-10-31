#include <iostream>
using namespace std;

int main(){
    int n;
    //get the number of rows 
    cout<<"Enter the number of rows: ";
    cin>>n;

    //create the array of pointers equal to n
    int **jaggerArr = new int *[n];

    //take an arry for the different sizes for the columns
    int c[1000] = {0};

    //loop for getting the data of elements
    for(int i=0; i<n;i++){
        //get the number of columns for each row
        cout<<"Enter the number of columns: ";
        cin>>c[i];
        //create the array for each row with the given number of columns
        jaggerArr[i] = new int[c[i]];
        //get the data 
        for(int j=0;j<c[i];j++){
            cin>>jaggerArr[i][j];
        }
    }cout<<endl;

    //print the data
    for(int i=0; i<n; i++){
        for(int j=0; j<c[i]; j++){
            cout<<jaggerArr[i][j]<<" ";
        }cout<<endl;
    }

    // Free dynamically allocated memory
    for (int i = 0; i < n; i++) {
        //delete the arrays associated with each row
        delete[] jaggerArr[i];
    }
    //delete the row array 
    delete[] jaggerArr;

    return 0;
}