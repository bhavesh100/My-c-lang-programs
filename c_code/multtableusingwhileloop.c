#include <stdio.h>

int main(int argc, char const *argv[])
{
    int j,i=1;
    printf("enter the number of multiplication table you want\n");
    scanf("%d",&j);
    while(i<101){
        printf("%d*%d=%d\n",j,i,i*j);
        i++;
    }
    return 0;
}
