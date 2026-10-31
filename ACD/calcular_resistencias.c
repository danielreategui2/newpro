/*<>\*/
#include <stdio.h>
int main(){
    int lim_corriente = 2;
    int lim_potencia = 20;
    int min_resistencia = 3;
    float req= 0.0;
    float corriente = 0.0;
    int voltaje;
    int resistencia1, resistencia2;
    char mod_circuito;
    printg("Ingrsee el voltaje del cicuito:");
    scanf("%d", &voltaje );

    printf("Ingrese 2 valores de resistencias: ");
    scanf("%d", &resistencia1);
    scanf("%d", &resistencia2);

    printf("Determine si el circuito es en serie (S) o en paralelo (P): ");
    scanf(" %c", &mod_circuito);

    if(mod_circuito == 'S' || mod_circuito == 'P'){
        if(mod_circuito == 'S'){
            req= resistencia1 + resistencia2;
            if()
        }
    }


}
