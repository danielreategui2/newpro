/*<>\*/
#include <stdio.h>
int main() {
    int num_y;
    float inverso;
    bool es_divisible;
    printf("Ingrese un valor entero: \n");
    scanf("%d", &num_y);
    es_divisible = (num_y % 3 == 0) && (num_y % 5 == 0);
    if (es_divisible){
        printf("Es divisible entre 3 y 5 en conjunto.\n");
    } else {
        printf("No es divisible entre 3 y 5 en conjunto.\n");
    }
    if (num_y != 0) {
        inverso = 1.0 / num_y;
        printf("El inverso multiplicativo del resultado es: %.2f\n", inverso);
    }
    return 0;
}