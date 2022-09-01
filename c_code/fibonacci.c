#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,a,b,p;
    printf("Enter the number you want the fibonacci series");
    scanf("%d",&n);
    a=0;
    b=1;

    while (p<=n)
    {
        p=a;
        a=b;
        b=a+p;
        printf("%d",p);

    }
    
    return 0;
}
