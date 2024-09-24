// write a function that can summarize all array elements
#include <stdio.h>

int main() {
  float arr[5] = {1.02, 1.03, 2.03, 2.07, 2.08};
  int i;
  float store = 0.000;
  for (i = 0; i < 5; i++) {
    store = store + arr[i];
  }
  printf("%f", store);
}
