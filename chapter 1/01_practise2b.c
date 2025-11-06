#include <stdio.h>

int main() {
  int r;
  printf("Enter radius of circle:");
  scanf("%d", &r);
  int h;
  printf("Enter height of circle:");
  scanf("%d", &h);

  float volume = 3.14*r*r*h;
  printf("volume of cylinder with radius %d and height %d is %f: " , r, h, volume); 
  return 0;
}