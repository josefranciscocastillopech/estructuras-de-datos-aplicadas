#include<stdio.h>

#define NUM_ALIMENTOS 4

int main()
{
    char *alimentos[NUM_ALIMENTOS] = {"Hamburguesa","Pizza","Tacos","Refresco"};
    float precios[NUM_ALIMENTOS] = {50.00, 80.00, 25.00, 20.50};
    int cantidades[NUM_ALIMENTOS] = {0,0,0,0};
    int cantidad;
    int opcion;
    char continuar;
    
    printf("Bienvenido al restaurante\n");
    printf("Menu:\n");

    for(int i = 0; i < NUM_ALIMENTOS; i++)
    {
        /* code */
        printf("%d - %s - %.2f\n", i+1, alimentos[i], precios[i]);

    }

    printf("5)Salir\n");
    printf("Elije una opcion:");
    scanf("%d", &opcion);
    
    do
    {
        /* code */

        if(opcion >= 1 && opcion < 5)
        {
            /* code */
            printf("Ingresa la cantidad %s:", alimentos[opcion-1]);
            scanf("%d", &cantidad);
            cantidades[opcion-1] = cantidades[opcion-1] + cantidad;
            printf("Deseas ordenar algo mas:(s/n)");
            scanf(" %c", &continuar);
        }
        if (opcion == 5)
        {
            printf("Has salido del pedido");
            break;
        }
        

    } while (continuar == 's' || continuar == 'S');

    printf("%d",cantidades[2]);
    
    return 0;
}