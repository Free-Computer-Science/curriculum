// question 3: Finding the Maximum in an Array
// Note: We will revisit this question in the algorithms course. It's not a
// difficult one, but know that you are building your first sorting algorithm
// here!
#include <stdio.h>
// This question is also a question that will involve some dynamic allocation.
// You will learn how to create a VLA right now
int main() {
  // We are using a C99 standard with allows VLAs on the stack. Not every
  // compiler supports VLAs so you might have to create one using realloc()

  int n;
  int addnumber;

  printf("Enter the Size of your Array: ");

  scanf("%d", &n);

  int arr[n];

  for (int i = 0; i < n; i++) {
    printf("Enter a whole number: ");
    scanf("%d", &addnumber);
    arr[i] = addnumber;
  }

  int max = arr[0];
  for (int i = 1; i < 10; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  printf("The Largest number is: %d/n", max);

  return 0;
}

// Notice that we don't do anything to prevent bad input, which totally can
// cause undefined behavior.
/*
For example, I tested entering -1, 66666666666666666666666666, a, and =
It spat out a number I didn't put in there, which means that I had undefined
behavior.

We'll talk about preventing bad inputs later, but for now, just know that you
can do stuff and the compiler won't stop you. It doesn't care.
*/
