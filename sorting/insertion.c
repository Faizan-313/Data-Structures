#include <stdio.h>

int main()
{
    int n = 7;
    int arr[] = {9,4,7,1,5,3,2};

    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }printf("\n");

    for(int i = 1; i< n; i++){
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        
    }    
    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }printf("\n");

}