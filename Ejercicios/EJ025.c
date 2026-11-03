/*<>\*/

#include <stdio.h>
#include <math.h>
void main(){
    printf("<--- Declaracion de variables y constantes --->\n");
    int PORCENTAJE_TOTAL = 100;
    float total, parte, cubo, porcentaje;
    printf("<--- Pedir dato inicial al usuario --->\n");
    printf("Ingrese un valor:\n");
    scanf("%f", &total);
    printf("<--- Verificación que el valor total sea mayor que 0 --->\n");
    if (total > 0) {
        printf("<--- Pedir ingreso de una parte del valor original --->\n");
        printf("Ingrese una parte del valor original: \n");
        scanf("%f", &parte);
        printf("<--- Cálculo para sacar el porcentaje de dicha cantidad --->\n");
        porcentaje = (parte / total) * PORCENTAJE_TOTAL;
        printf("<--- Elevación al cubo del porcentaje --->\n");
        cubo = pow(porcentaje, 3);
        printf("<---Presentación de los resultados --->\n");
        printf("El porcentaje dcalculado es: %.2f%%\n", porcentaje);
        printf("El cubo del porcentaje es: %.2f\n", cubo);
    } else {
        printf("<--- Verificacion fallida --->\n");
        printf("Valor invalido!");
    }
}