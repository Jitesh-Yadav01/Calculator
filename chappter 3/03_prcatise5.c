#include <stdio.h>

int main() {
  char ch;
  printf("Enter character: ");
  scanf("%c",&ch);

  if(ch >= 97 && ch <= 122) {
    printf("character entered is lowercase");
  } else if(ch >= 65 && ch <= 90 ) {
    printf("character entered is uppercase");
  }
  return 0;
}