/*<>\*/
#include<stdio.h>
void main(){
    float c1, c2, c3, nf, nc, nl;
    printf("Ingrese la nota del primer certamen: \n");
    scanf("%f", &c1);

    printf("Ingrese la nota del segundo certamen: \n");
    scanf("%f", &c2);

    printf("Ingrese la nota del laboratorio: \n");
    scanf("%f", &nl);

    nc = (c1+c2+c3)/3;
    nf = (nc*0.7)+(nl*0.3);
    c3= 7-nf;
    if(nf > 7){
        printf("La nota final que usted saco es de: %.2f\n", nf);
    }else{
        printf("La nota final que usted saco es de: %.2f\n", nf);
        printf("Le falta %.2f puntos para aprobar con 7.0.\n", c3);
        c3=(c3/0.7)*3;
        printf("Necesita una nota de %.2f punto/s  en el tercer certamen para aprobar.", c3);
    }
}