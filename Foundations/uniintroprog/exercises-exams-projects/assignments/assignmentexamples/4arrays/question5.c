// pass an array as a function argument (parameter) and print the value of the
// array. It can be any kind of array
#include <stdio.h>

int funfunfunction(char passedarray[]);

int main() {
  char arr[6] = "helloW";

  funfunfunction(arr);
  return 0;
}

int funfunfunction(char passedarray[]) {
  for (int i = 0; i < 6; i++) {
    printf("%c \n", passedarray[i]);
  }
  return 0;
}
