/*<>\*/

#include <stdio.h>
#include <string.h>
void main(){
    int mes, doble_mes;
    char mes_nombre [11];

    printf("Ingrese un numero entero entre 1 y 12 para mostrar el mes del anio:\n");
    scanf("%d", &mes);
    if(mes>=1 && mes<=12){
        if(mes==1){
            strcpy(mes_nombre, "Enero");
        }if(mes==2){
            strcpy(mes_nombre, "Febrero");
        }if(mes==3){
            strcpy(mes_nombre, "Marzo");
        }if(mes==4){
            strcpy(mes_nombre, "Abril");
        }if(mes==5){
            strcpy(mes_nombre, "Mayo");
        }if(mes==6){
            strcpy(mes_nombre, "Junio");
        }if(mes==7){
            strcpy(mes_nombre, "Julio");
        }if(mes==8){
            strcpy(mes_nombre, "Agosto");
        }if(mes==9){
            strcpy(mes_nombre, "Septiembre");
        }if(mes==10){
            strcpy(mes_nombre, "Octubre");
        }if(mes==11){
            strcpy(mes_nombre, "Noviembre");
        }if(mes==12){
            strcpy(mes_nombre, "Diciembre");
        }
        doble_mes = mes * 2;
        printf("El mes es: %s \n", mes_nombre);
        printf("El doble del resultado es: %d \n", doble_mes);
    }else{
        printf("Valor invalido, por favor ingrese nuevamente un valor numerico entre 1 y 12 para mostrar el mes.");
    }
    printf("La operacion fue finalizada.");
}
    