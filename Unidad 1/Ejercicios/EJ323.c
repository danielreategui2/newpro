/*<>\*/

#include <stdio.h>
#include <string.h>
#include <math.h>
void main(){
    int mes, potencia;
    char mes_nombre [11];
    bool bandera;

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
        potencia = pow(mes, 4);
        printf("El mes es: %s \n", mes_nombre);
        printf("La potencia cuarta del resultado es: %d \n", potencia);
        bandera = true;
    }else{
        printf("Valor invalido, por favor ingrese nuevamente un valor numerico entre 1 y 12 para mostrar el mes.\n");
        bandera = false;
    } if (bandera == true){
        printf("El resultado es valido.\n");
    }else{
        printf("El resultado es invalido.\n");
    }
    printf("La operacion fue finalizada.");
}
    