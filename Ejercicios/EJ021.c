/*<>\*/
#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void main(){
    float ang_radianes, result_cos;
    //son definidas como reales ya que van a ser utilizadas en funciones trigonometricas.

    int a;
    //se la define como entero debido a que en el enunciado pide explicitamente que se coloque un dato entero.

    bool es_positivo, es_negativo, es_cero;
    //Se definen como boleanos  ya que almacenan verdadero o falso en base a la condicion logica de las variables

    printf("Ingrese un valor entero: \n");
    scanf("%d", &a);

    es_positivo = (a>0);
    es_negativo = (a<0);
    es_cero = (a==0);
    //ocurre unca comparacion con variables booleanas ya que si son iguales a 0 indica que es falso caso contrario es verdadero
	
    if(es_positivo){
        printf("El valor es positivo.\n");
    }else if(es_negativo){
        printf("El valor es negativo.\n");
    }else{
        printf("El valor es igual a cero.\n");
    }

    ang_radianes = a * (M_PI / 180);
    //se transforma la variable 'a' a radianes para posteriormente sacar el coseno del angulo.
	result_cos = cos(ang_radianes);


    if(a == 0){
        printf("El coseno del angulo es: %.0f", result_cos);
    }else{
        printf("El coseno del angulo es: %f", result_cos);
    }
}