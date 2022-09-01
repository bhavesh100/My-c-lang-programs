#include<stdio.h>
int main() {
  int myNumbers[3];
  int i,n;
    for (n = 0; n < 4; n++) {
    scanf("%d\n",&myNumbers[n]);
  }
 
  for (i = 0; i < 4; i++) {
    printf("%d\n", myNumbers[i]);
  }
 
  return 0;
}