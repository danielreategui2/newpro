/*<>\*/

#include <stdio.h>
void main(){
    int z;
    int MIN = 10;
    int MAX = 100;
    float resultado, promedio;
    bool en_rango;
    printf("Ingrese un zero entero entre 10 y 100:\n");
    scanf("%d", &z);
    en_rango = ((z>=MIN && z <=MAX)==true);
    if (en_rango == true){
        printf("El valor se encuentra dentro del rango.\n");
    }else{
        printf("EL valor no se encuentra dentro del rango, por favor vuelva a ingresar los datos.\n");
    }
    promedio = (MIN + MAX / 2);
    resultado = z - promedio;
    if (resultado < 0){
        resultado = resultado * (-1);
    }
    printf("El promedio es: %.2f \n", promedio);
    printf("La diferencia entre el resultado y el promedio es de: %.2f \n", resultado);
}