#include <stdlib.h>

int main(){
    //Reto 1 Hello Word
    printf("Reto 1 \n");
    printf("Hello Word, Tomas \n");

    //Reto 2 Hola… nombre y apellido
    printf("\nReto 2 \n");
    printf("Hello Word My name is Tomas \n");
    
    //Reto 3 Mensaje multilínea
    printf("\nReto 3 \n");
    printf("Platzi cuenta con cursos de: \nIngles\nMatematicas \nProgramacion \nLiderazgos");
    
    //Reto 4 Sumador
    printf("\nReto 4 \n");
    float x, y, z;
    printf("Ingrese el primer digito: ");
    scanf("%f",&x);
    printf("Ingrese el segundo digito: ");
    scanf("%f",&y);
    z=x+y;
    printf("Suma es %f + %f = %.3f",x,y,z);
    
    //Reto 5 Suma y multiplicacion
    printf("\nReto 5 \n");
    int x1, y1, z1, w1;
    printf("Ingrese el primer digito: ");
    scanf("%d",&x1);
    printf("Ingrese el segundo digito: ");
    scanf("%d",&y1);
    printf("Ingrese el segundo digito: ");
    scanf("%d",&z1);
    w1=(x1+y1)*z1 ;
    printf("Valores son: %d, %d, %d \n",x1,y1,z1);
    printf("Resultado es: %d",w1);
    return 0;
}