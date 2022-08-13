#include<stdio.h>
int main()
{
 int a,b;
    printf("write the number:-");
    scanf("%d",&a);
    b=a/10;
    a=b*10;
    printf("The number with last unit digit 0 is %d",a);   
}
