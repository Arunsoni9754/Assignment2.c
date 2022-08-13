#include<stdio.h>
int main()

{
   int  a,b,s=0;
    printf("Enter the three digit number:-");
    scanf("%d",&a);
    while(a)
    {
    b=a%10;
    a=a/10;
    s=s+b;
    }
    printf("The sum is %d",s);
    return 0;
}
