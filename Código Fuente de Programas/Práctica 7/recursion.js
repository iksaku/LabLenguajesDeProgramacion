/** Forma Iterativa */
function factorial(n){
    var result = 1;

    for(var i = n; i >= 1; i--){
      result = result * i;
    }

    return result;
}

/** Forma Recursiva */
function factorial(n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}