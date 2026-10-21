#include <stdio.h>
#include <string.h>

void main() {
    int anio, mes, dia, k, j = 0;
    int DIVISOR = 7;
    int dia_sem = -1;
    int AJUSTE_MES = 12;

    printf("Ingrese e anio: \n");
    scanf("%d", &anio);

    printf("Ingrese el mes en valor numerico: \n1. Enero\n2. Febrero\n3. Marzo\n4. Abril\n5. Mayo\n6. Junio\n7. Julio\n8. Agosto\n9. Septiembre\n10. Octubre\n11. Noviembre\n12. Diciembre\n");
    scanf("%d", &mes);

    printf("Ingrese el dia en valor numerico: \n");
    scanf("%d", &dia);

    if(mes > 0 && mes <= 2){
            mes = mes + AJUSTE_MES;
            anio = anio - 1;
    }
    k= anio % 100;
    j = anio /100;

    dia_sem = (dia + (13* (mes + 1))/5 + k + (k/4) + (j/4) + (2*j))% DIVISOR;

}