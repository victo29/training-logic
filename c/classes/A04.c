#include <stdio.h>

int main(){

    int a,b;
    double resultado;

    a=5;
    b=2;

    resultado = (double) a /b; // Necessário passar o doulble para o compilador entender

    printf("%lf",resultado);

    return 0;

}
