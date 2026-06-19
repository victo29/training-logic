#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

typedef struct {
    char dados[MAX];
    int  topo;
} Pilha;

void inicializar(Pilha *p)       { p->topo = -1; }
int  pilhaVazia(Pilha *p)        { return p->topo == -1; }
int  pilhaCheia(Pilha *p)        { return p->topo == MAX - 1; }

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
    Pilha p;
    inicializar(&p);

    char palavra[MAX];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int len = (int)strlen(palavra);
    for (int i = 0; i < len; i++)
        palavra[i] = (char)tolower((unsigned char)palavra[i]);

    int metade = len / 2;

    for (int i = 0; i < metade; i++)
        empilhar(&p, palavra[i]);

    int inicio = (len % 2 == 0) ? metade : metade + 1;
    int palindromo = 1;

    for (int i = inicio; i < len && palindromo; i++) {
        char topo = desempilhar(&p);
        if (topo != palavra[i])
            palindromo = 0;
    }

    if (palindromo)
        printf("\"%s\" E um palindromo!\n", palavra);
    else
        printf("\"%s\" NAO e um palindromo!\n", palavra);

    return 0;
}
