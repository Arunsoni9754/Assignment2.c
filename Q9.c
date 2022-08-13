#include<stdio.h>
int main()
{
    int a;
    double b;
    float d;
    char x;
    int c=sizeof(a);
    int t=sizeof(b);
    int u=sizeof(d);
    int w=sizeof(x);
    printf("the size of int is %d\n",c);
    printf("the size of double is %d\n",t);
    printf("the size of float is %d\n",u);
    printf("the size of char is %d\n",w);

}
