#include <stdlib.h>

int main(){
    //Reto 1 - Número mayor y menor
    int x,y;
    printf("Ingresa el Primer numero:");
    scanf("%d",&x);
    printf("Ingresa el segundo numero:");
    scanf("%d",&y);
    if(x>y){
        printf("%d es mayor que %d",x,y);
    }else if(x<y){
        printf("%d es mayor que %d",y,x);
    }else{
        printf("%d son iguales %d",x,y);
    }
    return 0;
}