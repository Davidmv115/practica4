#include <stdio.h>

int main() {
    int valor;
    char palo, opcion;

    printf("ingresa el valor de la carta (1-13): ");
    scanf("%d", &valor);

    printf("ingresa el palo de la carta (c, d, e, t): ");
    scanf(" %c", &palo);

    if (valor < 1 || valor > 13) {
        printf("Error: Valor de carta inválido.\n");
        return 0;
    }

    if (palo != 'c' && palo != 'd' && palo != 'e' && palo != 't') {
        printf("Error: Palo de carta inválido.\n");
        return 0;
    }
    
    printf("A) Indicar si la carta pertenece a una baraja\n");
    printf("B) Indicar el valor de la carta de la forma A,2,3,...10,J,Q,K\n");
    printf("C) Indicar el palo de la carta de la forma corazón, diamante, espada, trebol\n");
    printf("D) Terminar el programa\n");
    scanf(" %c", &opcion);

    switch (opcion) {
        case 'A':
        case 'a':
            printf("La carta pertenece a la baraja.\n");
            break;
        case 'B':
        case 'b':
            if (valor == 1)
                printf("la carta es A.\n");
            else if (valor >= 2 && valor <= 10)
                printf("la carta es %d.\n", valor);
            else if (valor == 11)
                printf("la carta es J.\n");
            else if (valor == 12)
                printf("la carta es Q.\n");
            else if (valor == 13)
                printf("la carta es K.\n");
            break;
        case 'C':
        case 'c':
            switch (palo) {
                case 'c':
                    printf("la carta es corazón.\n");
                    break;
                case 'd':
                    printf("la carta es diamante.\n");
                    break;
                case 'e':
                    printf("la carta es espada.\n");
                    break;
                case 't':
                    printf("la carta es trébol.\n");
                    break;
            }
            break;
        case 'D':
        case 'd':
            printf("el programa a terminado ADIOS\n");
            break;
        default:
            printf("opcion inválida.\n");
            break;
    }

    return 0;
}

