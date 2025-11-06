#include <stdio.h>

int main() {
  int m;
  printf("Enter marks obtained in mathematics: ");
  scanf("%d",&m);
  int p;
  printf("Enter marks obtained in physics: ");
  scanf("%d",&p);
  int c;
  printf("Enter marks obtained in chemistry: ");
  scanf("%d",&c);

  int total = m+p+c;
  if(total == 40 && m >= 33 && p>=33 && c>=33) {
    printf("you got passed");
  } else {
    printf("you failed");
  }


  return 0;
}