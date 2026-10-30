#include <stdio.h>
#include <math.h>
int main(){
    float x1, x2, y1, y2, r1, r2, d, dif_absoluta, sum_r;
    printf("Ingrese la ubicacion de la circunferencia: x, y y el radio (r)\n");
    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &r1);

    printf("Ingrese la ubicacion de la circunferencia: x, y y el radio (r)\n");
    scanf("%f", &x2);
    scanf("%f", &y2);
    scanf("%f", &r2);

    d = sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
    dif_absoluta= r1-r2;
    sum_r=r1+r2;
    if(r1<=0){
        printf("Error de variables, por favor ingrese nuevamente la ubicacion y el radio de la circunferencia.");
    }
    printf("La distancia entre los centros de las circunferencias es:  %.2f\n", &d);
    if(d>sum_r){
        printf("Las circunferencias fueron clasificadas como exteriores.");
    }if(d== sum_r){
        printf("Las circunferencias fueron clasificadas como tangentes exteriores");
    }if(dif_absoluta < d < sum_r && d==!0){
        printf("Las circunferencias fueron clasificadas como secantes.");
    }if(d==dif_absoluta&&d>0){
        printf("Las cicunferencias fueorn clasificadas como tangentes interiores.");
    }if(d<dif_absoluta){
        printf("Las circunferencias fueron clasificadas como interiores sin intersección.");
    }if(d==0 && r1==r2){
        printf("Las circunferencias son coincidentes.");
    }

}
