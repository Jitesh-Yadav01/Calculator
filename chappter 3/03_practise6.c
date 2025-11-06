#include <stdio.h>

int main() {
  int a = 4, b = 5, c = 6, d = 7;
  if(a>b && a>c && a>d) {
    printf("a is greater of all numbers");
  } 
  if(b>a && b>c && b>d) {
    printf("b is greater of all numbers");
  } 
  if(c>b && c>a && c>d) {
    printf("c is greater of all numbers");
  } 
  if(d>b && d>c && d>a) {
    printf("d is greater of all numbers");
  } 
  return 0;
}