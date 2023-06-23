// Verify that the expression getchar() != EOF is 0 or 1.
#include<stdio.h>

void main(){
  int c = (getchar() != EOF);
  printf("%d",c);

}

//result is 1
