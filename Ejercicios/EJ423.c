/*<>\*/
#include <stdio.h>
int main() {
    int edad;
    float fcm, zona, bono;
    float FACTOR_ZONA = 0.70;
    printf("Ingrese su edad: \n");
    scanf("%d", &edad);
    fcm = 220 - edad;
    zona = FACTOR_ZONA * fcm;
    bono = 1.5 * fcm;
    printf("La frecuencia cardiaca maxima es: %.0f\n", fcm);
    printf("La zona de entrenamiento es: %f\n", zona);
    printf("El factor zona es: %.2f\n", FACTOR_ZONA);
    printf("El bono es: %f\n", bono);
    return 0;
}