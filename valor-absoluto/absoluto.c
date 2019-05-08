#include <stdio.h>

int main(){
    int numero;
    int absoluto;

    printf("Ingresa un número\n");
    scanf("%d", &numero);

    if (numero < 0){
        absoluto = numero * -1;
    }else{
        absoluto = numero;
    }
    printf("El valor absoluto de %d es %d\n", numero, absoluto);
    return (0);
}