#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100


typedef struct {
    char dados[MAX];
    int  inicio;
    int  fim;
    int  tamanho;
} FilaA;

void inicA(FilaA *f){ f->inicio = 0; f->fim = -1; f->tamanho = 0; }
int  vaziaA(FilaA *f){ return f->tamanho == 0; }
int  cheiaA(FilaA *f){ return f->tamanho == MAX; }

void enfileirarA(FilaA *f, char c) {
    if (!cheiaA(f)) {
        f->dados[++(f->fim)] = c;
        f->tamanho++;
    }
}

char desenfileirarA(FilaA *f) {
    if (!vaziaA(f)) {
        char c = f->dados[f->inicio++];
        f->tamanho--;
        return c;
    }
    return '\0';
}


typedef struct {
    int dados[MAX];
    int inicio;
    int fim;
    int contador;
} FilaB;

void inicB(FilaB *f)          { f->inicio = 0; f->fim = -1; f->contador = 0; }
int  vaziaB(FilaB *f)         { return f->contador == 0; }
int  cheiaB(FilaB *f)         { return f->contador == MAX; }

void enfileirarB(FilaB *f, int v) {
    if (!cheiaB(f)) {
        f->fim = (f->fim + 1) % MAX;
        f->dados[f->fim] = v;
        f->contador++;
    }
}

int desenfileirarB(FilaB *f) {
    if (!vaziaB(f)) {
        int v     = f->dados[f->inicio];
        f->inicio = (f->inicio + 1) % MAX;
        f->contador--;
        return v;
    }
    return -1;
}

int main(void) {
    FilaA filaA;
    FilaB filaB;
    inicA(&filaA);
    inicB(&filaB);

    char vetor[MAX];
    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", vetor);

    int n = (int)strlen(vetor);
    for (int i = 0; i < n; i++) {
        char c = vetor[i];

        if (isdigit((unsigned char)c)) {
            enfileirarB(&filaB, c - '0');

        } else if (isalpha((unsigned char)c)) {
            enfileirarA(&filaA, c);

        }
    }

    printf("\nFila B (digitos convertidos para inteiros): ");
    if (vaziaB(&filaB)) {
        printf("(vazia)");
    } else {
        while (!vaziaB(&filaB))
            printf("%d ", desenfileirarB(&filaB));
    }
    printf("\n");

    printf("Fila A (letras): ");
    if (vaziaA(&filaA)) {
        printf("(vazia)");
    } else {
        while (!vaziaA(&filaA))
            printf("%c ", desenfileirarA(&filaA));
    }
    printf("\n");

    return 0;
}
