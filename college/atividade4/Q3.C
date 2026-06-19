#include <stdio.h>

#define MAX 10

typedef struct {
    int dados[MAX];
    int inicio;
    int fim;
    int tamanho;
} FilaCircular;

void inicializar(FilaCircular *f) {
    f->inicio  = 0;
    f->fim     = -1;
    f->tamanho = 0;
}

int filaVazia(FilaCircular *f) { return f->tamanho == 0; }
int filaCheia(FilaCircular *f) { return f->tamanho == MAX; }

void enfileirar(FilaCircular *f, int valor) {
    if (filaCheia(f)) {
        printf("Erro: fila cheia!\n");
        return;
    }

    f->fim = (f->fim + 1) % MAX;
    f->dados[f->fim] = valor;
    f->tamanho++;
    printf("Valor %d enfileirado!\n", valor);
}

int desenfileirar(FilaCircular *f) {
    if (filaVazia(f)) {
        printf("Erro: fila vazia!\n");
        return 0;
    }
    int valor   = f->dados[f->inicio];

    f->inicio   = (f->inicio + 1) % MAX;
    f->tamanho--;
    return valor;
}

int main(void) {
    FilaCircular f;
    inicializar(&f);

    int opcao, valor;

    do {
        printf("\n=== MENU - FILA CIRCULAR ===\n");
        printf("1. Enfileirar um valor inteiro nao nulo\n");
        printf("2. Desenfileirar um valor (exibir o dobro)\n");
        printf("3. Desenfileirar tudo (exibir sem alteracao)\n");
        printf("4. Terminar o programa\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um valor inteiro nao nulo: ");
                scanf("%d", &valor);
                if (valor != 0)
                    enfileirar(&f, valor);
                else
                    printf("Valor nao pode ser zero!\n");
                break;

            case 2:
                if (!filaVazia(&f)) {
                    valor = desenfileirar(&f);
                    printf("Valor desenfileirado: %d | Dobro: %d\n", valor, valor * 2);
                }
                break;

            case 3:
                if (filaVazia(&f)) {
                    printf("Fila vazia!\n");
                } else {
                    printf("Valores desenfileirados: ");
                    while (!filaVazia(&f))
                        printf("%d ", desenfileirar(&f));
                    printf("\n");
                }
                break;

            case 4:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 4);

    return 0;
}
