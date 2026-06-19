#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 200

typedef struct {
    char dados[MAX];
    int  inicio;
    int  fim;
    int  tamanho;
} Fila;

void inicFila(Fila *f)          { f->inicio = 0; f->fim = -1; f->tamanho = 0; }
int  filaVazia(Fila *f)         { return f->tamanho == 0; }
int  filaCheia(Fila *f)         { return f->tamanho == MAX; }

void enfileirar(Fila *f, char c) {
    if (!filaCheia(f)) {
        f->dados[++(f->fim)] = c;
        f->tamanho++;
    }
}

char desenfileirar(Fila *f) {
    if (!filaVazia(f)) {
        char c = f->dados[f->inicio++];
        f->tamanho--;
        return c;
    }
    return '\0';
}

typedef struct {
    char dados[MAX];
    int  topo;
} Pilha;

void inicPilha(Pilha *p)        { p->topo = -1; }
int  pilhaVazia(Pilha *p)       { return p->topo == -1; }
int  pilhaCheia(Pilha *p)       { return p->topo == MAX - 1; }

void empilhar(Pilha *p, char c) {
    if (!pilhaCheia(p))
        p->dados[++(p->topo)] = c;
}

char desempilhar(Pilha *p) {
    if (!pilhaVazia(p))
        return p->dados[(p->topo)--];
    return '\0';
}

int main(void) {
    Fila  f;
    Pilha p;
    inicFila(&f);
    inicPilha(&p);

    char sequencia[MAX];
    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", sequencia);

    int n = (int)strlen(sequencia);
    for (int i = 0; i < n; i++)
        enfileirar(&f, sequencia[i]);

    while (!filaVazia(&f)) {
        char c = desenfileirar(&f);
        if (isalpha((unsigned char)c))
            empilhar(&p, (char)tolower((unsigned char)c));
        else
            empilhar(&p, c);
    }


    printf("Resultado apos desempilhar: ");
    while (!pilhaVazia(&p))
        printf("%c", desempilhar(&p));
    printf("\n");

    return 0;
}
