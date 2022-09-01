#include <stdio.h>
int main(int argc, char const *argv[])
{
    int age,marks;
    printf("Enter your age\n");
    scanf("%d",&age);
    
    printf("enter your marks\n");
    scanf("%d",&marks);

    switch (age){
        case 3:
        printf("the age is 3");
        switch (marks)
        {
        case 45:
        printf("your marks are 45");
            break;
        
        default:
        printf("your marks are not 45");
            break;
        }
        break;

        }

    return 0;
}
