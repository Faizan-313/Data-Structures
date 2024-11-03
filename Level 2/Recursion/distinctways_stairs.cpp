#include <iostream>

using namespace std;

int count(int nSteps){
    if(nSteps<0) return 0;
    else if(nSteps==0) return 1;
    else if(nSteps==1||nSteps==2||nSteps==3) return nSteps;
    else return count(nSteps-1)+count(nSteps-2);
}

int main(){
    int n;
    cin>>n;
    cout<<count(n)<<endl;
}