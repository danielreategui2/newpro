#include <stdio.h>

int main() {
    int numero;
    int unidades, decenas, centenas;
    int suma_total;

    // Pedimos al usuario un número entre 100 y 999
    printf("Ingrese un numero entero de 3 digitos (100 - 999): ");
    scanf("%d", &numero);

    // Validamos que sea de 3 dígitos
    if (numero < 100 || numero > 999) {
        printf("El numero ingresado no es de 3 digitos.\n");
        return 1;
    }

    // --- LÓGICA DE DESCOMPOSICIÓN ---

    // 1. Unidades: El residuo de dividir entre 10 nos da el último dígito (9)
    unidades = numero % 10;

    // 2. Decenas:
    // Primero quitamos las unidades dividiendo entre 10 -> 349 / 10 = 34
    // Luego sacamos el residuo entre 10 para obtener el '4' -> 34 % 10 = 4
    // Finalmente multiplicamos por 10 para tener el valor de la decena -> 4 * 10 = 40
    decenas = ((numero / 10) % 10) * 10;

    // 3. Centenas:
    // Dividimos entre 100 para obtener el primer dígito -> 349 / 100 = 3
    // Multiplicamos por 100 para tener el valor de la centena -> 3 * 100 = 300
    centenas = (numero / 100) * 100;

    // 4. Suma total
    suma_total = centenas + decenas + unidades;

    // --- MOSTRAR RESULTADOS ---
    printf("\n--- RESULTADOS ---\n");
    printf("Centenas = %d\n", centenas);
    printf("Decenas  = %d\n", decenas);
    printf("Unidades = %d\n", unidades);
    printf("-------------------\n");
    printf("Suma total: %d + %d + %d = %d\n", centenas, decenas, unidades, suma_total);

    return 0;
}