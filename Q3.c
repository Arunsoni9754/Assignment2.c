#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the two number:-");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The number after swapping is %d %d",a,b);
    return 0;
}
