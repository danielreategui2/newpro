/*<>\*/
#include <stdio.h>
#include <string.h>
int main() {
    float distancia_recorrida, combustible_consumido, rendimiento, autonomia;
    int CAPACIDAD = 50;
    char clas_rendimiento[20];

    printf("Ingrese la distancia recorrida en km: \n");
    scanf("%f", &distancia_recorrida);
    
    if(distancia_recorrida >= 0) {
        printf("Cuantos litros de combustible se consumieron: \n");
        scanf("%f", &combustible_consumido);
        if (combustible_consumido >=0  && combustible_consumido <= CAPACIDAD){
            rendimiento = distancia_recorrida / combustible_consumido;
            autonomia = CAPACIDAD - combustible_consumido;
            autonomia = autonomia * rendimiento;
            if(rendimiento < 8){
                strcpy(clas_rendimiento, "Bajo");
            }if(rendimiento >= 8 && rendimiento < 12){
                strcpy(clas_rendimiento, "Regular");
            }if(rendimiento >= 12 && rendimiento < 16){
                strcpy(clas_rendimiento, "Bueno");
            }if(rendimiento >= 16){
                strcpy(clas_rendimiento, "Excelente");
            }if(autonomia <50){
                printf("Combustible bajo \n");
            }
            printf("El rendimiento es: %s", clas_rendimiento);    
            printf("\nEl rendimiento es: %.2f km/l", rendimiento);
            printf("\nLa autonomia es: %.2f km", autonomia);
        }
    }
    return 0;
}