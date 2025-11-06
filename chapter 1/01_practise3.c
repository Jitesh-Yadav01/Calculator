#include <stdio.h>

int main() {
  float c;
  printf("Enter temperature in celcius: ");
  scanf("%f",&c);

  float f = (c*9/5)+32;
  printf("Temperature in farnahite: %f" , f);
  return 0;
}