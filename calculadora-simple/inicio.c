#include <stdio.h>
#include "biblioteca.h"

int main(void){
    float a;
    float b;
    float c;
    int seleccion = 0;

    printf("\n");

    printf("Bienvenido, ¿Qué operación deseas realizar?\n ");
    printf("1.- Suma (a+b) \n");
    printf("2.- Resta (a-b) \n");
    printf("3.- Multiplicacion (a*b) \n");
    printf("4.- Division a/b \n");
    printf("teclee la opcion: \n");
    scanf("%d", &seleccion);

    if (seleccion == 1){
        printf("SUMA \n");
        printf("Introduce el valor de a \n\t");
        scanf("%f", &a);
        printf("Introduce el valor de b \n\t");
        scanf("%f", &b);

        suma(&a, &b, &c);
        printf("a+b=%.2f\n", c);
    }else if (seleccion == 2){
        printf("RESTA \n");
        printf("Introduce el valor de a\n\t ");
        scanf("%f", &a);
        printf("Introduce el valor de b\n\t ");
        scanf("%f", &b);

        resta(&a, &b, &c);
        printf("a-b=%.2f\n", c);
    }else if (seleccion == 3){
        printf("MULTIPLICACION \n");
        printf("Introduce el valor de a \n\t");
        scanf("%f", &a);
        printf("Introduce el valor de b\n\t ");
        scanf("%f", &b);

        multiplicacion(&a, &b, &c);
        printf("a*b=%.2f\n", c);
    }else if (seleccion == 4){
        printf("DIVISION \n");
        printf("Introduce el valor de a\n\t ");
        scanf("%f", &a);
        printf("Introduce el valor de b \n\t");
        scanf("%f", &b);

        division(&a, &b, &c);
        printf("a/b=%.2f\n", c);
    }
}