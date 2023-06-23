
#include<stdio.h>

float fahr_to_celcius(float fahr);

void main(){
  float fahr, celsius;
  int lower = 0, step = 20, upper = 300;

  printf("Fahr. Celsius\n");
  for(fahr=lower; fahr <= upper; fahr = fahr + step)
    printf("%5.0f %7.1f\n", fahr, fahr_to_celcius(fahr));
}

float fahr_to_celcius(float fahr){
  return ((5.0/9.0) * (fahr - 32.0));
}
