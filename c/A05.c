#include <stdio.h>
#include <string.h>

int main(){

    int idade;
    double salario, altura;

    printf("Digite o valor da idade: ");
    scanf("%d",&idade); // & utilizado para refer�nciar o endere�o da vari�vel na mem�ria

    printf("Digite o valor do salario: ");
    scanf("%lf", &salario);

    printf("Digite o valor da altura: ");
    scanf("%lf", &altura);

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);

    return 0;
}
