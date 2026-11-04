/*<>\*/
#include <stdio.h>
#include <math.h>
int main() {
    float c1, c2, c3, indice, cubo;
    int credito1, credito2, credito3;
    int PORCENTAJE = 100;
    printf("---- Sistema de calificaciones del Hospital ----\n");
    printf("Ingrese las 3 calificaciones: \n");
    scanf("%f", &c1);
    scanf("%f", &c2);
    scanf("%f", &c3);
    printf("Ingrese los tres creditos que tiene: \n");
    scanf("%d", &credito1);
    scanf("%d", &credito2);
    scanf("%d", &credito3);
    indice = (c1 * credito1 + c2 * credito2 + c3 * credito3) / (credito1 + credito2 + credito3);
    if (indice >= 0 && indice <= 10) {
        cubo = pow(indice, 3);
        printf("El indice de calificacion es: %.2f\n", indice);
        printf("El cubo del indice es: %.2f\n", cubo);
    }else {
        printf("Los datos estan fuera del rango establecido.");
    }
    return 0;

}