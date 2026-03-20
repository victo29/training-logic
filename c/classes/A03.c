#include <stdio.h>

int main(){

    int x,y;
    double z = 2.459890;
    int idade;
    double salario;
    char nome[50];
    char sexo;


    x = 10;
    y = 10;

    printf("%d\n",x);
    printf("%d\n",y);


    printf("%.2lf\n", z);

    idade = 32;
    salario = 4560.9;
    strcpy(nome, "Victor Tavares");
    sexo = 'M';

    printf("O funcionário(%c) %s tem %d anos e recebe %.2lf reais", sexo, nome, idade, salario);

    return 0;
}
