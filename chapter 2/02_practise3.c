#include <stdio.h>

int main() {
  int s;
  printf("Enter number: ");
  scanf("%d" , &s);

  printf("the value of s%97 is %d" , s%97);
  return 0;
}