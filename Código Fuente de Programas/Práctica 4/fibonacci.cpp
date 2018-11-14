#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void main() {
    int n, i = 0;
    cout << "Ingrese la cantidad de números a generar: ";
    cin >> n;

    cout << "Serie de Fibonacci:\n";
    while (i < n) {
        cout << fibonacci(i);
        if (i > 0) cout << ", ";
        ++i;
    }
}