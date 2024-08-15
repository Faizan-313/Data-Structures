#include <stdio.h>

int main()
{
    int n = 7;
    int arr[] = {20,35,40,100,3,10,20};
    for (int i = 0; i < n; i++){
        int small = arr[i];
        int index = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < small){
                small = arr[j];
                index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    for(int i = 0; i< n; i++){
        printf("%d ", arr[i]);
    }
}