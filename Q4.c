#include<stdio.h>
int main()
{
    int a,b;
    printf("ENter the two number two be swapped:- ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The numbers after swapping are:- %d %d",a,b);

}
