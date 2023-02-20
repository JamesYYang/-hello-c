#include <stdio.h>

int sum(int arr[], size_t len) {
  int total = 0;
  for (; len > 0; len--)
    total += *(arr + len - 1);
  return total;
}

int main(void) {
  int n = 10;
  const int* const npA = &n;
  int* npB = &n;
  *npB = 20;
  printf("The value is: %d\n", n);
  printf("Are they the same: %d\n", npA == npB);

  int arr[] = { 1, 2, 3, 4 };
  printf("%d", sum(arr, sizeof(arr) / sizeof(int)));

  return 0;
}