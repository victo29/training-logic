#include <stdio.h>

int main(){

    int N, i;

    printf("Digite a quantidade de nuemros: ");
    scanf("%d", &N);

    double vet[N];

    for(i = 0; i < N; i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%lf", &vet[i]);
    }

    for(i=0; i < N; i++){
        printf("O %d valor foi: %.2lf\n", i+1, vet[i]);
    }


    return 0;
}
