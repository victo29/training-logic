#include <stdio.h>
#include <string.h>
void clean_input()
{
    char c;
    while ((c = getchar()) !=  '\n' && c != EOF) {};
}

void input_text(char *buffer, int lenght)
{
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

int main()
{

    char nome[50];
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", idade);

    printf("Digite o seu nome: ");
    clean_input();
    input_text(nome, 50);

    printf("NOME = %s\n", nome);
    printf("IDADE = %d\n", idade);

    return 0;

}
