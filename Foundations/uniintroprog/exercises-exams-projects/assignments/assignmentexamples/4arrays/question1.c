// write a program that declares an arry of 10 integers, initializes it with
// values from 1 to 10, and prints each value.
#include <stdio.h>

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i;

  for (i = 0; i < 10; i++) {
    printf("%i \n", arr[i]);
  }
}

// QUESTION TIME: WHAT HAPPENS IF YOU CHANGE THE i<10 to i<=10? Try it, you'll
// get some extra garbage! This is an example of undefined behavior and it is
// BAD. You do not what undefined behavior. There is nothing to protect you from
// it.
