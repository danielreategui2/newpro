/*<>\*/
#include <stdio.h>
#include <string.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void main(){
    float ang_radianes, result_sen;
    int num, codigo_estado;
    char dia_nombre [10];

    printf("Ingrese un numero entero entre 1 y 7 para mostrar el dia de la semana:\n");
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
        ang_radianes = num * (M_PI / 180);
        //se transforma la variable 'a' a radianes para posteriormente sacar el seno del angulo.
        result_sen = sin(ang_radianes); 
        printf("El dia de hoy es: %s \n", dia_nombre);
        printf("El seno del angulo es: %f\n", result_sen);
    }else{
        printf("Valor invalido, por favor ingrese un valor numerico del dia de la semana entre 1 y 7. \n");
    }
    codigo_estado = 0;
    printf("Codigo de estado de la operacion: %d", codigo_estado);
}
    