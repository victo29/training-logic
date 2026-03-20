#include <stdio.h>

int main(){

    int N, i, valor, resultado;

    printf("QUANTOS NUMEROS SERAO DIGITADOS?: ");
    scanf("%d", &N);

    resultado = 0;

    for(i = 1; i <= N; i++){
        printf("DIGITE O %d- VALOR:", i);
        scanf("%d", &valor);
        resultado = resultado + valor;
    }

    printf("A SOMA DOS %d NUMEROS FOI: %d", i-1, resultado);


    return 0;
}
