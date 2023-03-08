#include <string.h>
#include <stdio.h>
#include <math.h>
#define STRLEN 14

int main(void)
{
    char strA[STRLEN] = "Hello,";
    char strB[] = " world!";
    strncat(strA, strB, STRLEN - strlen(strA) - 1);
    printf("%s\n", strA);

    long double num = -10.1234;
    printf("%.2f\n", fabs(num));
}