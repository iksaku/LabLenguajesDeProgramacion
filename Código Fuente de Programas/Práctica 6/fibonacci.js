function fibonacci(n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

console.log("Ingrese la cantidad de números a generar: ");
let n = parseInt(readline());

let serie = "";
for (var i = 0; i < n; i++) {
    serie += fibonacci(i);
    if (i > 0) {
        serie += ", ";
    }
}
console.log("Serie de Fibonacci:\n" + serie);