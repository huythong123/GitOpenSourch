#include <stdio.h>

void inFibonacciNhoHon(int n) {
    int a = 0, b = 1, c;

   printf("Day Fibonacci nho hon %d la:\n", n);
    while (a < n) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

