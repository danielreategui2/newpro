#include <stdio.h>
#include <string.h>
void main() {
    /*Crear un sistema que pida el valor total de la factura
    y de que tipo es: si es por servicios profesionales
    se retiene el 10%, si es por sevicios educativos el 8%
    se debe devolver el valor retenido*/

    //DATOS
    float valor_fac =0.0;
    int seleccion = 2; // 1 para profesional y 2 para educativo
    float PROFESIONAL = 0.1;
    float EDUCATIVO = 0.08;
    float retencion = 0.0;

    //ENTRADA DE DATOS
    printf("Ingrede el valor de la factura: \n");
    scanf("%f", &valor_fac);

    printf("Ingrede el valor de la factura: \n1. Factura rpofesional. \n2. Factura educativa\n");
    scanf("%d", &seleccion);

    if(seleccion == 1 ){
        retencion = valor_fac * PROFESIONAL;
    }else if(seleccion == 2){
        retencion = valor_fac * EDUCATIVO;
    }else{
        printf("USTED NO HA SELECCIONADO UN VALOR VALIDO\n");
    }
    
    printf("El valor de lar etencion es: %.2f\n", retencion);
}