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
    printf("Platzi cuenta con cursos de: \nIngles\nMatematicas \nProgramacion \nLiderazgos\n");
    
    //Reto 4 Sumador
    printf("\nReto 4 \n");
    float x, y, z;
    printf("Ingrese el primer digito: ");
    scanf("%f",&x);
    printf("Ingrese el segundo digito: ");
    scanf("%f",&y);
    z=x+y;
    printf("Suma es %f + %f = %.3f\n",x,y,z);
    
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
    printf("Resultado es: %d",w1\n);

    //Reto 6 Rebanadas de Pizza
    printf("\nReto 6 \n");
    int rebanada,consumo,pizza;
    printf("Ingrese el primer digito: ");
    scanf("%d",&rebanada);
    printf("Ingrese el segundo digito: ");
    scanf("%d",&consumo);
    pizza = rebanada - consumo;
    printf("Sobra un numero de Rebanadas: %d",pizza\n);

    //Reto 7 Rebanadas de Pizza
    printf("\nReto 7 \n");
    int tatal,personas,propina,iva;
    printf("El total a pagar:");
    scanf("%d",&total);
    printf("Personas:");
    scanf("%d",&personas);
    printf("Porcentajes de propina");
    scanf("%d",&propina);
    printf("Porcentajes iva");
    scanf("%d",&iva);
    return 0;
}