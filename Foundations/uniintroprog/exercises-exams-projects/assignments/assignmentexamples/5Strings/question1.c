#include <assert.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <strings.h>

int main() {
  char strarr[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
  char strlit[] = "World";

  printf("%s \n", strarr);
  printf("%s \n", strlit);

  return 0;
}
