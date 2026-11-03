/*<>\*/

#include <stdio.h>
int main(){
    int PORCENTAJE_TOTAL = 100;
    int valor_referencia;
    float total, parte, resultado2, porcentaje;
    printf("Ingrese un valor:\n");
    scanf("%f", &total);
    printf("Ingrese un valor de referencia:\n");
    scanf("%d", &valor_referencia);
    if (valor_referencia > 0 && valor_referencia <= 100) {
        if (total > 0) {
            printf("Ingrese una parte del valor original: \n");
            scanf("%f", &parte);
            porcentaje = (parte / total) * PORCENTAJE_TOTAL;
            printf("El porcentaje calculado es: %.2f%%\n", porcentaje);
            resultado2 = (porcentaje / valor_referencia) * PORCENTAJE_TOTAL;
            printf("El porcentaje en base al valor de referencia es: %.2f\n", resultado2);
        }else{
            printf("Valores invalidos!");
        }}else{
        printf("Error: Porcentaje no valido!");
    }
    return 0;
}