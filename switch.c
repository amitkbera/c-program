#include<stdio.h>
int main()
{
    char op;
    int num1,num2;
    
    printf("Enter any two number to perform following arithmetic operations\n ");
    printf("Enter the value for fist number\n ");
    scanf("%d",&num1);
    printf("Enter the value for second number\n ");
    scanf("%d",&num2);
     printf("Enter a for doing addision\n ");
      printf("Enter s for doing substraction\n ");
       printf("Enter m for doing multiplication\n ");
        printf("Enter d for doing division\n ");
      scanf("%c",&op);
        switch(op)
        {
            case 'a' :
            {
                printf("The sum=%d",num1+num2);
            }
            break;
            case 's' :
            {
                printf("The substraction=%d",num1-num2);
            }
            break;
            case 'm' :
            {
                printf("The multiplication=%d",num1*num2);
            }
            break;
            case 'd' :
            {
                printf("The division=%d",num1/num2);
            }
            break;
            default :
            {
                printf("You entered a wrong key");
            }
            return 0;

        }
}

