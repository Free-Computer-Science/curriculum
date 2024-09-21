// Write a program that declares an array of 8 characters, intializes it with
// the string "Cprogram" and prints the array in reverse order

#include <stdio.h>

int main() {
  char arr[8] = "Cprogram";

  for (int i = 0; i < 8; i++) {
    printf("%c \n", arr[i]);
  }
  return 0;
}
