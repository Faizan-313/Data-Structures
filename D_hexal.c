#include<stdio.h>

void hexal(int num)
{
    if (num < 16)
    {
        if (num < 10)
            printf("%d",num);
        else if (num<16)
            printf("%c",55+num);
    }
    else
    {
        int r = num%16;
        hexal(num/16);
        printf("%d",r);
    }
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num):
    hexal(num);
}
