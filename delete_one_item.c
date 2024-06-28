//deletes only one given item
#include<stdio.h>
int main()
{
    int n = 10;
    int A[] = {2,3,1,5,4,7,8,9,6,98};
    int item;

    for (int i = 0; i< n; i++)
        printf("%d ",A[i]);
    printf("\n");

    printf("entre the item to be deleted ");
    scanf("%d",&item);

    for (int i = 0; i < n ; i++)
    {
        if (A[i]== item)
        {
            for (int j = i; j < n-1; j++)
                A[j] = A[j+1];
            n--;
            break;
        }
    }
    for (int i = 0; i< n; i++)
        printf("%d ",A[i]);
}
