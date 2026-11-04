/*<>\*/
#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
int  main(){
    float distancia, consumo, precio_combustible, gasto, producto;
    printf("Ingrese la distancia en Km: \n");
    scanf("%f", &distancia);
    printf("Ingrese el consumo de combustible en L/Km: \n");
    scanf("%f", &consumo);
    printf("Ingrese el precio del combustible: \n");
    scanf("%f", &precio_combustible);
    if(distancia > 0 && consumo > 0 && precio_combustible > 0){
        gasto = distancia *consumo* precio_combustible;
        producto = gasto*M_PI;
        printf("El gasto de combustible es: %.2f\n", gasto);
        printf("El producto del gasto por Pi es: %.2f\n", producto);
    }else{
        printf("Error: Para calcular el producto la distancia y el consumo deben ser distintos a cero.\n");
    }
    return 0;
}