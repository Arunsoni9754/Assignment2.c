#include<stdio.h>
int main()
{
 int a,b,n;
    printf("write the number:-");
    scanf("%d",&a);
    printf("Enter the digit to be append:-");
    scanf("%d",&n);
    a=a*10;
    a=a+n;
    printf("The number with last unit digit n is %d",a);   
}
