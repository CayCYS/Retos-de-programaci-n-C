#include <stdio.h>
#include <string.h>
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
    float x=0, y=0, z=0;
    printf("Ingrese el primer digito: ");
    scanf("%f",&x);
    printf("Ingrese el segundo digito: ");
    scanf("%f",&y);
    z=x+y;
    printf("Suma es %f + %f = %.3f\n",x,y,z);
    
    //Reto 5 Suma y multiplicacion
    printf("\nReto 5 \n");
    int x1=0, y1=0, z1=0, w1=0;
    printf("Ingrese el primer digito: ");
    scanf("%d",&x1);
    printf("Ingrese el segundo digito: ");
    scanf("%d",&y1);
    printf("Ingrese el segundo digito: ");
    scanf("%d",&z1);
    w1=(x1+y1)*z1;
    printf("Valores son: %d, %d, %d \n",x1,y1,z1);
    printf("Resultado es: %d \n",w1);

    //Reto 6 Rebanadas de Pizza
    printf("\nReto 6 \n");
    int rebanada=0,consumo=0,pizza=0;
    printf("Rebanadas se partieron: ");
    scanf("%d",&rebanada);
    printf("Rebanadas se concumieron: ");
    scanf("%d",&consumo);
    pizza = rebanada - consumo;
    printf("Sobra un numero de Rebanadas: %d\n",pizza);

    //Reto 7 Edad futura y pasada
    printf("\nReto 7 \n");
    char nombre[20];
    int edad=0, edaddespues=0, edadantes=0;
    printf("Cual es tu nombre?");
    scanf("%s",nombre);
    printf("Cual es tu edad?");
    scanf("%d",&edad);
    edadantes = edad - 1;
    edaddespues = edad + 1;
    printf("Your name is %s el otro year tendras %d y el year anterior tuviste %d \n",nombre,edaddespues,edadantes);

    //Reto 8 Rebanadas de Pizza
    printf("\nReto 8 \n");
    int total=0, personas=0, propina=0, iva=0, pago=0;
    printf("El total a pagar:");
    scanf("%d",&total);
    printf("Personas:");
    scanf("%d",&personas);
    printf("Porcentajes de propina:");
    scanf("%d",&propina);
    printf("Porcentajes iva:");
    scanf("%d",&iva);
    pago=((total/personas) + ((total/propina)/personas) +((total/iva)/personas));
    printf("total es de: %d \n",pago);

    //Reto 9 Calculando días
    printf("\nReto 9 \n");
    int dias=0,horas=0,minutos=0,segundos=0;
    printf("Ingrese el numero de dias:");
    scanf("%d",&dias);
    horas=dias*24;
    minutos=horas*60;
    segundos=minutos*60;
    printf("Los dias %d, tienen %d horas, %d minutos, %d segundos \n",dias,horas,minutos,segundos);

    //Reto 10 Conversor de millas
    printf("\nReto 10 \n");
    printf("Ingresa las millas a convertir:");
    float milla=0, kilometro=0;
    scanf("%f",&milla);
    kilometro=milla*1.609344;
    printf("Kilometros: %.3f\n",kilometro);

    //Reto 11 Cuantas veces un número en otro
    printf("\nReto 11 \n");
    int may=0,menor=0,igual=0;
    printf("Ingresa un numero mayor a 1000: ");
    scanf("%d",&may);
    printf("Ingresa el numero menor a 100: ");
    scanf("%d",&menor);
    igual=may/menor;
    printf("Cabe: %d\n",igual);
    return 0;
}