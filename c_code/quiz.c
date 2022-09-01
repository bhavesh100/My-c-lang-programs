#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    printf("welcome to quiz compedition\n");
    printf("who is the prime minister of india\n");
    printf("1 narendra modi 2 rahul gandhi 3 manmohan singh 4 indra gandhi\n");
    scanf("%d",&i);
    if (i==1)
    {
        printf("you win 100 dollars\n");
    }
    else
    {
        printf("you lose\n");
    }

    
    return 0;
}
