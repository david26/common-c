#include <stdio.h>
#include <string.h>

int factorial(int );

int main() {
    int numero;
    unsigned long factor;
    char aux[20];
    do {        
        fflush(0);
        printf("Ingrese el numero: ");
        gets(aux);
        sscanf(aux, "%d", &numero);
        factor = factorial(numero);
        printf("El factorial de %d es %lu\n", numero, factor);        
    } while(numero > 0);
}

int factorial(int n) {
    if(n == 0) {
        return(1);
    } else {
        return(n * factorial(n - 1));
    }
}