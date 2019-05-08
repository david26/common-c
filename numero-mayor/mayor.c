#include <stdio.h>

int main(){
    int x = 0;
    int y = 0;
    int mayor = 0;

    printf("Ingresa un número entero:");
    scanf("%d", &x); 

    printf("Ingresa un segundo número entero:");
    scanf("%d", &y);

    mayor = y; 
    if (x > y){
        mayor = x;
    }
    printf("\nEl número mayor entre %d y %d es %d\n", x, y, mayor);
    
    return 0;
}
