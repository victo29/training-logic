#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    double dados[MAX];
    int    topo;
} Pilha;

void   inicializar(Pilha *p)         { p->topo = -1; }
int    pilhaVazia(Pilha *p)          { return p->topo == -1; }
int    pilhaCheia(Pilha *p)          { return p->topo == MAX - 1; }

void   empilhar(Pilha *p, double v)  { if (!pilhaCheia(p)) p->dados[++(p->topo)] = v; }
double desempilhar(Pilha *p)         { return pilhaVazia(p) ? 0.0 : p->dados[(p->topo)--]; }

int main(void) {
    Pilha p;
    inicializar(&p);

    char expr[MAX];
    printf("Digite a expressao em notacao polonesa reversa: ");
    scanf("%s", expr);

    int n = (int)strlen(expr);

    for (int i = 0; i < n; i++) {
        char c = expr[i];

        if (c >= '0' && c <= '9') {
            empilhar(&p, (double)(c - '0'));

        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            if (p.topo < 1) {
                printf("Erro: expressao invalida (operandos insuficientes)!\n");
                return 1;
            }

            double b = desempilhar(&p);
            double a = desempilhar(&p);
            double resultado = 0.0;

            switch (c) {
                case '+': resultado = a + b; break;
                case '-': resultado = a - b; break;
                case '*': resultado = a * b; break;
                case '/':
                    if (b == 0.0) {
                        printf("Erro: divisao por zero!\n");
                        return 1;
                    }
                    resultado = a / b;
                    break;
            }
            empilhar(&p, resultado);

        } else {
            printf("Caractere desconhecido '%c' ignorado.\n", c);
        }
    }

    if (p.topo != 0) {
        printf("Erro: expressao mal formada (sobram valores na pilha)!\n");
        return 1;
    }

    printf("Resultado: %.4g\n", desempilhar(&p));
    return 0;
}
