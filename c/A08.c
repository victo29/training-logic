#include <stdio.h>

int main(){

    int resultado, valor;

    printf("DIGITE O PRIMEIRO VALOR DAS SOMAS: ");
    scanf("%d", &valor);
    resultado = valor;

    while(valor != 0){
        printf("DIGITE OUTRO VALOR: ");
        scanf("%d", &valor);
        resultado = resultado + valor;
    }

    printf("VALOR TOTAL DAS SOMAS: %d", resultado);

    return 0;
}
