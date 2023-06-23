//Experiment to find out what happens when printf's argument string contains \c, where c is some character not listed above.


#include<stdio.h>

void main(){
  printf("hello\c, world\n");
}

// the result is "helloc, world"
