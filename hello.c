#include <stdio.h>
#include <stdlib.h> 

typedef struct 
{
  int num;    
  int age;    
  char *name; 
} employee;

void foo(void) {
  int n = 10;
  int *n_ptr = &n;
  int m = *n_ptr;
  printf("%d %p %d", n, n_ptr, m);
}

int main(void)
{
  employee emp; 
  emp.name = "James";
  emp.num = 9547;
  emp.age = 18;
  printf("\n============================================\n");
  printf("My name is %s\n", emp.name);
  printf("My num is %d\n", emp.num);
  printf("My age is %d\n", emp.age);
  printf("============================================\n");
  printf("The size of S is: %d bytes\n", sizeof(employee));

  foo();

  return EXIT_SUCCESS;
}