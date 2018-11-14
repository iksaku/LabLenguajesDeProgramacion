#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void main() {
    int n, i = 0;
    printf("Ingrese la cantidad de números a generar: ");
    scanf("%d", &n);

    printf("Serie de Fibonacci:\n");
    while (i < n) {
        printf("%d", fibonacci(i));
        if (i > 0) printf(", ");
        ++i;
    }
}