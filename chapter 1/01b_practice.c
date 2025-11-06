#include <stdio.h>

int main() {
  int length;
  printf("Enter length of rectangle: ");
  scanf("%d" , &length);

  int breadth;
  printf("Enter breadth of rectangle: ");
  scanf("%d" , &breadth);

  int area = length*breadth;
  printf("Area of rectangle: %d", area);
  
  return 0;
}