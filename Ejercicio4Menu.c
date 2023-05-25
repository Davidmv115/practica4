#include <stdio.h>

int main() {
    int lado1, lado2;
    char opcion;

    printf("Ingresa el valor del lado 1 de la ficha: ");
    scanf("%d", &lado1);

    printf("Ingresa el valor del lado 2 de la ficha: ");
    scanf("%d", &lado2);

    if (lado1 < 0 || lado1 > 6 || lado2 < 0 || lado2 > 6) {
        printf("valor de ficha inválido.\n");
        return 0;
    }

    printf("A) Indicar si la ficha pertenece a un dominó de doble 6.\n");
    printf("B) Indicar si la ficha es una mula y pertenece a un dominó de doble 6.\n");
    printf("C) Indicar qué ficha es la anterior y la siguiente.\n");
    printf("D) Indicar qué ficha está en el renglón anterior y en el siguiente.\n");
    printf("E) Terminar el programa.\n");
    scanf(" %c", &opcion);

    switch (opcion) {
        case 'A':
        case 'a':
            if (lado1 <= 6 && lado2 <= 6)
                printf("la ficha pertenece a un dominó de doble 6.\n");
            else
                printf("la ficha no pertenece a un dominó de doble 6.\n");
            break;
        case 'B':
        case 'b':
            if (lado1 == lado2 && lado1 <= 6)
                printf("la ficha es una mula y pertenece a un dominó de doble 6.\n");
            else
                printf("la ficha no es una mula o no pertenece a un dominó de doble 6.\n");
            break;
        case 'C':
        case 'c':
            if (lado1 > 0 && lado1 <= 6 && lado2 > 0 && lado2 <= 6) {
                printf("la ficha anterior es %d|%d y la siguiente es %d|%d.\n",
                    lado1 - 1, lado2, lado1 + 1, lado2);
            } else {
                printf("valor de ficha inválido.\n");
            }
            break;
        case 'D':
        case 'd':
            if (lado1 > 0 && lado1 <= 6 && lado2 > 0 && lado2 <= 6) {
                printf("la ficha en el renglón anterior es %d|%d y en el siguiente es %d|%d.\n",lado1, lado2 - 1, lado1, lado2 + 1);
            } else {
                printf("valor de ficha inválido.\n");
            }
            break;
        case 'E':
        case 'e':
            printf("el programa a terminado ADIOS\n");
            break;
        default:
            printf("opcion invalida.\n");
            break;
    }

    return 0;
}

