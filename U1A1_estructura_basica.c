#include <stdio.h>
#include <stdlib.h>

int edad = 0, edadLimite = 100 , edadRestante = 0;

int main(){
    printf("Ingresa tu edad: ");
    scanf("%d",&edad);
    edadRestante = edadLimite-edad;
    if(edad>=18){
        printf("eres mayor de edad y tu edad es: %d y te quedan %d",edad,edadRestante);
        }else{
            printf("eres manor de edad y tu edad es: %d y te quedad %d",edad,edadRestante);
        }
    return 0;
}
