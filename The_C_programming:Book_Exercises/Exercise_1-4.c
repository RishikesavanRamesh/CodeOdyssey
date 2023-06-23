
#include<stdio.h>

float celcius_to_fahr(float celsius);

void main(){
  float fahr, celsius;
  int lower = 0, step = 20, upper = 300;

  printf("Celsius Fahr.\n");
  for(celsius=lower; celsius <= upper; celsius = celsius + step)
    printf("%7.1f %5.0f\n", celsius, celcius_to_fahr(celsius));
}

float celcius_to_fahr(float celsius){
  return ((celsius*9.0/5.0) + 32.0);
}
