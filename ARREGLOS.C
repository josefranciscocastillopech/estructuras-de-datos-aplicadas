#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definir el tamaño máximo de alimentos
#define MAX_ALIMENTOS 4

int main() {
    // Arreglos dinámicos para almacenar nombres de alimentos
    char *alimentos[MAX_ALIMENTOS];
    float precios[MAX_ALIMENTOS];
    int cantidades[MAX_ALIMENTOS] = {0}; // Inicia cantidades pedidas en 0

    int opcion, cantidad;
    float total_general = 0;
    char nombre_alimento[50]; // Buffer temporal para los nombres

    // Solicitar los nombres de los alimentos al usuario
    printf("Ingrese el nombre de %d alimentos:\n", MAX_ALIMENTOS);
    for (int i = 0; i < MAX_ALIMENTOS; i++) {
        printf("Alimento %d: ", i + 1);
        scanf("%s", nombre_alimento);
        
        // Reservar memoria para el nombre del alimento
        alimentos[i] = (char *)malloc((strlen(nombre_alimento) + 1) * sizeof(char));
        strcpy(alimentos[i], nombre_alimento);

        // Ingresar precio del alimento
        printf("Precio de %s: ", alimentos[i]);
        scanf("%f", &precios[i]);
    }

    // Mostrar menú de alimentos
    printf("\nMenu de alimentos:\n");
    for (int i = 0; i < MAX_ALIMENTOS; i++) {
        printf("%d. %s - $%.2f\n", i + 1, alimentos[i], precios[i]);
    }
    printf("5. Salir\n");

    do {
        // Solicitar selección de alimento
        printf("\nSeleccione alguna opcion que desea pedir: ");
        scanf("%d", &opcion);

        if (opcion > 0 && opcion <= MAX_ALIMENTOS) {
            // Solicitar la cantidad de unidades
            printf("Ingrese la cantidad de %s que desea pedir: ", alimentos[opcion - 1]);
            scanf("%d", &cantidad);

            // Sumar la cantidad de unidades al arreglo correspondiente
            cantidades[opcion - 1] += cantidad;

            printf("%d unidades de %s agregadas al pedido.\n", cantidad, alimentos[opcion - 1]);
        } else if (opcion != 5) {
            printf("Opcion invalida, por favor intente de nuevo.\n");
        }

    } while (opcion != 5); // El ciclo termina cuando se selecciona 5 para finalizar

    // Mostrar resumen de cuenta
    printf("\nResumen de cuenta:\n");
    for (int i = 0; i < MAX_ALIMENTOS; i++) {
        if (cantidades[i] > 0) {
            float total_por_alimento = precios[i] * cantidades[i];
            printf("%s - $%.2f x %d = $%.2f\n", alimentos[i], precios[i], cantidades[i], total_por_alimento);
            total_general += total_por_alimento;
        }
    }

    // Mostrar total general
    printf("\nTotal general a pagar: $%.2f\n", total_general);

    // Liberar la memoria asignada dinámicamente
    for (int i = 0; i < MAX_ALIMENTOS; i++) {
        free(alimentos[i]);
    }

    return 0;
}
