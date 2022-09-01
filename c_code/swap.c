#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,t,*p1,*p2;
    scanf("%d%d",&a,&b);
    p1=&a;
    p2=&b;
    t=*p1;
    *p1=*p2;
    *p2=t;
    printf("%d%d",a,b);
    return 0;
}
