// Write a program to count blanks, tabs, and newlines.

#include<stdio.h>

void main(){
  int c, nb, nt, nn;

  while((c = getchar()) != EOF){
    if (c == ' ')
      ++nb;
    if (c == '\t')
      ++nt;
    if (c == '\n')
      ++nn;
  }
  printf("No. of Blanks : %2d,\nNo. of Tabs : %2d,\nNo. of Newlines : %2d\n", nb, nt, nn);
}
