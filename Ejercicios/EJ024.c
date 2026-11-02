/*<>\*/

#include <stdio.h>
void main(){
    int num;
    int MIN = 10;
    int MAX = 100;
    float result2;
    bool en_rango;
    printf("Ingrese un numero entero entre 10 y 100:\n");
    scanf("%d", &num);

    if (num<0){
        printf("Error: Valor invalido!");
    }else{
        en_rango = ((num>=MIN && num <=MAX)==true);
        if(en_rango == true){
            printf("El valor se encuentra dentro del rango y la expresion es VERDADERA\n");
        }else{
            printf("El valor no se encuentra dentro del rango y la expresion es FALSA\n");
        }
        result2 = num * 1.5;
        printf("El bono es de: %.2f \n", result2);
    }

    
}