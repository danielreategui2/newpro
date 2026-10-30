/*<>\*/
#include <stdio.h>
int main() {
    int val=0;
    printf("Ingrese un valor numerico\n");
    scanf("%d", &val);
    if(val==0){
        printf("El valor es cero");
    }else if (val>0){
        printf("El valor es positivo");
    }else{
        printf("El valor es negativo");
    }
    return 0;
}