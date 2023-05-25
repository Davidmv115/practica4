#include <stdio.h>
#include <math.h>
int main()
{
    int num, a, b, menu, res;
    float raiz, x, y;
    printf("1) determina si el numero es par\n");
    printf("2) elevar un numero a una potencia\n");
    printf("3) calcular raiz cuadrada de un numero\n");
    printf("4) terminar programa\n");
    scanf("%d",&menu);
    switch(menu)
    {
        case 1:
            printf("ingresa un numero:\n");
            scanf("%d",&num);
            res= num%2;
            if(res!=0)
                printf("el numero no es par\n");
            else
                printf("el numero es par\n");
        break;
        case 2:
            printf("ingresa un numero\n");
            scanf("%d",&num);
            printf("ingrese a que potencia quieres elevarlo\n");
            scanf("%d",&a);
            res= pow(num,a);
            printf("tu numero elevado a la potencia es %d\n", res);
        break;
        case 3:
            printf("ingresa un numero:\n");
            scanf("%f",&x);
            raiz= sqrt(x);
            printf("la raiz cuadrada de tu numero es: %.2f",raiz);
        break;
        case 4:
            printf("el programa a terminado ADIOS");
        break;
        default:
            printf("opcion invalida ADIOS\n");
        break;
    }

    return 0;
}


