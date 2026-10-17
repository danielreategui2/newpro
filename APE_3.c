#include <stdio.h>
int main() {
    float esp_total = 0.0;
    float GB_usados = 0.0;
    float porcentaje = 0.0;
    int GB = 1024;
    int can_doc, can_ima, can_vid, can_pro;
    float tam_doc, tam_ima, tam_vid, tam_pro;
    float esp_doc, esp_ima, esp_vid, esp_pro;
    float cap_dis;

    printf("Ingrese la capacidad del disco en GB:");
    scanf("%f", &cap_dis);

    printf("Ingresa la cantidad de documentos: ");
    scanf("%d", &can_doc);
    printf("Ingresa la cantidad de imagenes: ");
    scanf("%d", &can_ima);
    printf("Ingresa la cantidad de videos: ");
    scanf("%d", &can_vid);
    printf("Ingresa la cantidad de programas: ");
    scanf("%d", &can_pro);

    printf("El tamanno esta medido en MB \n");
    printf("Ingresa el tamanno de los documentos: ");
    scanf("%f", &tam_doc);
    printf("Ingresa el tamanno de las imagenes: ");
    scanf("%f", &tam_ima);
    printf("Ingresa el tamanno de los videos: ");
    scanf("%f", &tam_vid);
    printf("Ingresa el tamanno de los programas: ");
    scanf("%f", &tam_pro);

    esp_doc = can_doc * tam_doc;
    esp_ima = can_ima * tam_ima;
    esp_vid = can_vid * tam_vid;
    esp_pro = can_pro * tam_pro;

    esp_total = esp_doc + esp_ima + esp_vid + esp_pro;
    GB_usados = esp_total/GB;
    porcentaje = (GB_usados /cap_dis)*100;

    printf("El espacio total utilizado por los archivos es: %f MB\n", GB_usados);
    printf("El espcio total en GB del disco es: %f GB\n", GB_usados);
    printf("El porcentaje utilizado del disco es: %f%%\n", porcentaje);

    return 0;
}