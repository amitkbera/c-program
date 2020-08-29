#include <stdio.h>
 
 


void stringUpr(char *s);
 
int main()
{
    char str[100];
 
	printf("Enter any string : ");
    scanf("%[^\n]s",str);//read string with spaces
    
    
    
    stringUpr(str);
    printf("String after stringUpr : %s\n",str);
    return 0;
}
 
/******** function definition *******/

 
void stringUpr(char *s)
{
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
        ++i;
    }
}