#include <stdio.h>
void main(){
    int a, b, c, d, x  =0;
    printf("Ingrese el primer valor: ");
    scanf("%d", &a);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &b);
    if(a<b){
        x = a;
        a=b; 
        b=x;
    } 
    c= a/b;
    d=a-b;
    c=a*c+d;

    printf("El resultado es: %d", c);
}