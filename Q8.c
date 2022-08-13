#include<stdio.h>
int main()
{ int a;
    scanf("%d",&a);
    int b=a&1;
    if(b)
    printf("False");
    else
    {
        printf("True");
    }
}
