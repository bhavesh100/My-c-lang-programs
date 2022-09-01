#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
     char ch;
     printf("enter a character");
     scanf("%c",&ch);
     switch(ch)
     {
         case 'a':
         case 'e':
         case 'i':
         case 'o':
         case 'u':
         printf("the character is vowel");
         break;
         default:
         printf("the character is not vowel");

     }

    return 0;
}
