#include <stdio.h>

void view();
void push(int );
int pop();

#define Max 100
int stack[Max];
int top = -1;

int main()
{
    int ch;
    while(1)
    {
        printf("1 for push 2 for pop 3 for exit: ");
        scanf("%d",&ch);
        if(ch == 1)
        {
            int item;
            printf("Enter the element: ");
            scanf("%d",&item);
            push(item);
        }
        else if(ch == 2)
        {
            printf("%d removed \n",pop());
        }
        else if(ch == 3)
            break;
        else   
            printf("invalid option");
    }
    view();
}

void push(int element)
{
    if(top == Max-1)
        printf("overflow");
    else
        stack[++top] = element;
}

int pop()
{
    if(top == -1)
        printf("under flow");
    else    
        return stack[top--];
}

void view()
{
    if(top == -1)
        printf("stack empty");
    else{
        printf("Elements remaining in  stack\n");
        for(int i = 0; i<=top; i++)
            printf("%d",stack[i]);
    }
}