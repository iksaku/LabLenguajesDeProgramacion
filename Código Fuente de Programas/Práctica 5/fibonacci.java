import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class FibonacciSeries {
    public static void main(String args[]) {
        int i = 0;
        int n = -1;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Ingrese la cantidad de números a generar: ");
        do {
            try {
                n = Integer.parseInt(br.readLine());
            } catch(NumberFormatException e) {
                System.err.println("Porfavor ingrese un número válido...");
            }
        } while (n < 0)

        System.out.println("Serie de Fibonacci: ");
        while (i < n) {
            System.out.print(fibonacci(i));
            if (i > 0) {
                System.out.print(", ");
            }
            i++;
        }
    }

    public static int fibonacci(int n) {
        if (n <= 0) return 0;
        if (n == 1) return 1;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}