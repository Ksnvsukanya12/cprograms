/// Online C compiler to run C program online
#include <stdio.h>
void main() {
int a,b,c,large;   // Write C code here
 printf("enter a,b,c");
scanf("%d%d%d",&a,&b,&c);
large = ((a>b&&a>c)?a:(b>c?b:c));
printf("the largest one is:%d",large);
}
