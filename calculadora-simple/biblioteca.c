#include "biblioteca.h"

void suma(float *a, float *b, float *s){
    *s = *a + *b;
}

void resta(float *a, float *b, float *s){
    *s = *a - *b;
}

void multiplicacion(float *a, float *b, float *s){
    *s = *a * (*b);
}

void division(float *a, float *b, float *s){
    *s = *a / (*b);
}