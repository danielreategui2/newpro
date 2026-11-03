/*<>\*/
#include <stdio.h>

void main(){
    float inverso;
    //son definidas como reales ya que van a ser utilizadas en funciones trigonometricas.

    int c;
    //se la define como entero debido a que en el enunciado pide explicitamente que se coloque un dato entero.

    bool es_positivo, es_negativo, es_cero;
    //Se definen como boleanos  ya que almacenan verdadero o falso en base a la condicion logica de las variables

    printf("Ingrese un el numero de habitacion: \n");
    scanf("%d", &c);

    es_positivo = (c>0);
    es_negativo = (c<0);
    es_cero = (c==0);
    //ocurre unca comparacion con variables booleanas ya que si son iguales a 0 indica que es falso caso contrario es verdadero
	
    if(es_cero){
        printf("El valor es cero.\n");
    }
    if(es_positivo && c>=1 && c<=200){
        inverso = 1.0/c;
        printf("El valor es positivo.\n");
        printf("El inverso multiplicativo es: %f", inverso);
    }else if (c>200 && c != 0){
        printf("El número de habitación no existe, por favor vuelva a ingresar otra habitación.\n");
    }
    if (es_negativo){
        printf("El valor es negativo.\n");
        printf("ALERTA: El hotel no puede tener habitaciones negativas.\n");
    }

}