/*<>\*/
#include <stdio.h>
#include <math.h>
int main() {
    float num1, num2, media_geometrica, doble;
    printf("Ingrese el valor de dos numeros: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    if(num1>0 && num2>0){
        media_geometrica = pow((num1 * num2), 0.5);
        doble = 2 * media_geometrica;
        printf("La media geometrica es: %f\n", media_geometrica);
        printf("El doble de la media geometrica es: %f\n", doble);
    } else {
        printf("Valor invalido, ingrese numeros mayores a cero.\n");
    }
    printf("Animos, con esfuerzo y constancia todo se puede!\n");
    return 0;
}