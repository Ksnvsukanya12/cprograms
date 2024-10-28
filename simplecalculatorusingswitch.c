// Online C compiler to run C program online
#include <stdio.h>
void main() {
int a,b;
char op;
printf("enter a,b values and operators");
scanf("%d%d %c",&a,&b,&op);
switch(op)
{
    case '+' : printf("the addition is %d",a+b);
             break;
    case '-' : printf("the subtraction is %d",a-b);
             break;
    case '*' : printf("the multipication is %d",a*b);
             break;
    case '/' : printf("the division is %d",a/b);
             break;
    case '%' : printf("the modolus is %d",a%b);
             break;
    default : printf("invalid output");
              break;
}
}
