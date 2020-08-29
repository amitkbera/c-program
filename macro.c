#include<stdio.h>
#define f(x) 2*x*x+3*x+5
void main()
{
    int num;
    printf("Enter the value of x:");
    scanf("%d",&num);
    printf("\n Value of f(x) = %d",f(num));
   // return 0;
}