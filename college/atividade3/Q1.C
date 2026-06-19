#include <stdio.h>
#include <stdlib.h>

#define MAX 64

typedef struct {
    int dados[MAX];
    int topo;
} Pilha;

void inicializar(Pilha *p)      { p->topo = -1; }
int  pilhaVazia(Pilha *p)       { return p->topo == -1; }
int  pilhaCheia(Pilha *p)       { return p->topo == MAX - 1; }

void empilhar(Pilha *p, int valor) {
    if (pilhaCheia(p)) {
        printf("Erro: pilha cheia!\n");
        return;
    }
    p->dados[++(p->topo)] = valor;
}

int desempilhar(Pilha *p) {
    if (pilhaVazia(p)) {
        printf("Erro: pilha vazia!\n");
        return -1;
    }
    return p->dados[(p->topo)--];
}

int main(void) {
    Pilha p;
    inicializar(&p);

    int numero;
    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Erro: o numero deve ser maior que zero!\n");
        return 1;
    }

    int n = numero;
    while (n > 0) {
        empilhar(&p, n % 2);
        n /= 2;
    }

    printf("Representacao binaria de %d: ", numero);
    while (!pilhaVazia(&p)) {
        printf("%d", desempilhar(&p));
    }
    printf("\n");

    return 0;
}
