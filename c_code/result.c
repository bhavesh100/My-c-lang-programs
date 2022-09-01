#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    float a,b,c,d,e,total,per;
    printf("Enter the marks of 5 subjects");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    per=total/5;
    printf("Total marks =%f\nPercentage=%f",total,per);
    if (per>=60)
    {
        printf("\nfirst division");
    }
    else
    {
        if (per>=48&&per<=59)
        {
            printf("\nSecond division");
        }
        
         else
        {
            if (per>=36&&per<=47)
            {
           printf("\nThird division");
            }
              else
            {
                 printf("\nFail");
            }      
        }
    }
    return 0;
 }
