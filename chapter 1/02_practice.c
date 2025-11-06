#include <stdio.h>

int main() {
  int r;
  printf("Enter radius of circle:");
  scanf("%d", &r);

  float area = 3.14*r*r;
  printf("area of a circle with radius %d is %f", r , area);

  return 0;
}