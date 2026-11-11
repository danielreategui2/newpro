/*<>\*/
#include <stdio.h>
#include <string.h>
void main(){
    float inversa;
    int num;
    char dia_nombre [10];

    printf("Ingrese un numero entero entre 1 y 7 para mostrar el día de la semana:\n");
    scanf("%d", &num);
    if(num>=1 && num<=7){
        if(num==1){
            strcpy(dia_nombre, "Lunes");
        }if(num==2){
            strcpy(dia_nombre, "Martes");
        }if(num==3){
            strcpy(dia_nombre, "Miercoles");
        }if(num==4){
            strcpy(dia_nombre, "Jueves");
        }if(num==5){
            strcpy(dia_nombre, "Viernes");
        }if(num==6){
            strcpy(dia_nombre, "Sabado");
        }if(num==7){
            strcpy(dia_nombre, "Domingo");
        }
        inversa = 1.0/num;
        printf("El numero %d corresponde al dia %s \n", num, dia_nombre);
        printf("La inversa multiplicativa es: %.2f", inversa);
    }else{
        printf("Valor invalido, por favor ingrese un valor numerico del dia de la semana entre 1 y 7.");
    }
}
    