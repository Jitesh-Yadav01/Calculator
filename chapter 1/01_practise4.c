#include <stdio.h>

int main() {
  int p;
  printf("principle:");
  scanf("%d",&p);
  int r;
  printf("Enter Rate: ");
  scanf("%d",&r);
  int t;
  printf("Enter time: ");
  scanf("%d", &t);

  float SI = p*r*t/100;
  printf("simple interst: %f", SI);


  return 0;
}