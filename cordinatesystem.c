// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
void main() {
 int a,b,c;   // Write C code here
 printf("enter a,b,c");
 float r1,r2;
scanf("%d%d%d",&a&b&c);
d=(b*b)-(4*a*c);
if(d>0)
{
printf("roots are real and unequal");
r1=-b=sqrt(d)/2*a;
r2=-b-sqrt(d)/2*a;
}
else
{
    printf("odd");
}
}    
