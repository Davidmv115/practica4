#include <stdio.h>
#include <math.h>
int main() {
    int menu;
    float base, altura, lado1, lado2, lado3;
    
        printf("1)Calcular el área de un triángulo\n");
        printf("2)Calcular el perímetro de un triángulo\n");
        printf("3)Conocer el tipo de triángulo que se forma\n");
        printf("4)Terminar el programa\n");
        scanf("%d", &menu);
        switch (menu) {
            case 1:
                printf("ingresa la base del triángulo: ");
                scanf("%f", &base);
                printf("ingresa la altura del triángulo: ");
                scanf("%f", &altura);
                if (base <= 0 || altura <= 0) {
                    printf("Error la base y la altura deben ser números positivos.\n");
                } else {
                    float area = (base * altura) / 2;
                    printf("El área del triángulo es: %.2f\n", area);
                }
                break;
                
            case 2:
                printf("ingresa el lado 1 del triángulo: ");
                scanf("%f", &lado1);
                printf("ingresa el lado 2 del triángulo: ");
                scanf("%f", &lado2);
                printf("ingresa el lado 3 del triángulo: ");
                scanf("%f", &lado3);
                if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
                    printf("Error: los lados del triángulo deben ser números positivos.\n");
                } else {
                    float perimetro = lado1 + lado2 + lado3;
                    printf("El perímetro del triángulo es: %.2f\n", perimetro);
                }
                break;
                
            case 3:
                printf("ingresa el lado 1 del triángulo: ");
                scanf("%f", &lado1);
                printf("ingresa el lado 2 del triángulo: ");
                scanf("%f", &lado2);
                printf("ingresa el lado 3 del triángulo: ");
                scanf("%f", &lado3);
                if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
                    printf("Error: los lados del triángulo deben ser números positivos.\n");
                } else if (lado1 == lado2 && lado1 == lado3) {
                    printf("el triángulo es equilátero.\n");
                } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
                    printf("el triángulo es isósceles.\n");
                } else {
                    printf("el triángulo es escaleno.\n");
                }
                break;
                
            case 4:
                printf("el programa a terminado ADIOS\n");
                break;
                
            default:
                printf("opción inválida\n");
                break;
        }

    return 0;
}


