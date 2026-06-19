
#include <stdio.h>
#include <string.h>

#define MAX 200

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

    char expr[MAX];
    printf("Digite a expressao: ");
    scanf("%s", expr);

    int n        = (int)strlen(expr);
    int valido   = 1;

    for (int i = 0; i < n && valido; i++) {
        if (expr[i] == '(') {

            empilhar(&p, '(');
        } else if (expr[i] == ')') {

            if (pilhaVazia(&p)) {
                valido = 0;
            } else {
                desempilhar(&p);
            }
        }

    }


    if (valido && pilhaVazia(&p)) {
        printf("Os parenteses estao BALANCEADOS!\n");
    } else {
        printf("Os parenteses NAO estao balanceados!\n");
    }

    return 0;
}
