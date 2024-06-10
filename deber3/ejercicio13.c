#include <stdio.h>

// Función para calcular la suma de los números pares hasta n
int sumaPares(int n) {
    int suma = 0;
    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;

    printf("Ingrese un número para calcular la suma de los números pares hasta ese número: ");
    scanf("%d", &n);

    // Llamada a la función sumaPares y mostrar el resultado
    printf("La suma de los números pares hasta %d es: %d\n", n, sumaPares(n));

    return 0;
}
