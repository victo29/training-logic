#include <stdio.h>

#define MAX 50

int buscar(int v[], int quantidade, int valor) {
    for (int i = 0; i < quantidade; i++) {
        if (v[i] == valor) {
            return i;
        }
    }
    return -1;
}

void inserirSemRepetir(int v[], int valor, int *pos, int max) {
    if (*pos >= max) {
        printf("Erro: lista cheia. Nao foi possivel inserir %d.\n", valor);
        return;
    }

    if (valor == 0) {
        printf("Erro: o valor 0 nao pode ser inserido.\n");
        return;
    }

    if (buscar(v, *pos, valor) != -1) {
        printf("Erro: o valor %d ja existe na lista.\n", valor);
        return;
    }

    v[*pos] = valor;
    (*pos)++;
}

void listar(int v[], int quantidade) {
    if (quantidade == 0) {
        printf("Lista vazia.\n");
        return;
    }

    printf("[");
    for (int i = 0; i < quantidade; i++) {
        printf("%d", v[i]);

        if (i < quantidade - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

void intercalarListas(int l1[], int q1, int l2[], int q2, int resultado[], int *qResultado) {
    int i = 0, j = 0;
    *qResultado = 0;

    while (i < q1 || j < q2) {
        if (i < q1) {
            resultado[*qResultado] = l1[i];
            (*qResultado)++;
            i++;
        }

        if (j < q2) {
            resultado[*qResultado] = l2[j];
            (*qResultado)++;
            j++;
        }
    }
}

void gerarIntersecao(int l1[], int q1, int l2[], int q2, int resultado[], int *qResultado) {
    *qResultado = 0;

    for (int i = 0; i < q1; i++) {
        if (buscar(l2, q2, l1[i]) != -1) {
            inserirSemRepetir(resultado, l1[i], qResultado, MAX);
        }
    }
}

void gerarUniao(int l1[], int q1, int l2[], int q2, int resultado[], int *qResultado) {
    *qResultado = 0;

    for (int i = 0; i < q1; i++) {
        inserirSemRepetir(resultado, l1[i], qResultado, MAX * 2);
    }

    for (int i = 0; i < q2; i++) {
        inserirSemRepetir(resultado, l2[i], qResultado, MAX * 2);
    }
}

void removerPeloIndice(int v[], int *quantidade, int indice) {
    for (int i = indice; i < *quantidade - 1; i++) {
        v[i] = v[i + 1];
    }

    (*quantidade)--;
}

int main(void) {
    int lista1[MAX], lista2[MAX];
    int intercalada[MAX * 2], intersecao[MAX], uniao[MAX * 2];

    int q1 = 0, q2 = 0;
    int qIntercalada = 0, qIntersecao = 0, qUniao = 0;

    int n, valor, indice;

    printf("Quantidade de elementos da primeira lista: ");
    scanf("%d", &n);

    if (n < 0 || n > MAX) {
        printf("Erro: quantidade invalida para a primeira lista.\n");
        return 1;
    }

    while (q1 < n) {
        printf("Digite o %do valor da primeira lista: ", q1 + 1);
        scanf("%d", &valor);

        int antes = q1;

        inserirSemRepetir(lista1, valor, &q1, MAX);

        if (q1 == antes) {
            printf("Digite outro valor valido.\n");
        }
    }

    printf("\nQuantidade de elementos da segunda lista: ");
    scanf("%d", &n);

    if (n < 0 || n > MAX) {
        printf("Erro: quantidade invalida para a segunda lista.\n");
        return 1;
    }

    while (q2 < n) {
        printf("Digite o %do valor da segunda lista: ", q2 + 1);
        scanf("%d", &valor);

        int antes = q2;

        inserirSemRepetir(lista2, valor, &q2, MAX);

        if (q2 == antes) {
            printf("Digite outro valor valido.\n");
        }
    }

    printf("\nLista 1: ");
    listar(lista1, q1);

    printf("Lista 2: ");
    listar(lista2, q2);

    intercalarListas(lista1, q1, lista2, q2, intercalada, &qIntercalada);
    gerarIntersecao(lista1, q1, lista2, q2, intersecao, &qIntersecao);
    gerarUniao(lista1, q1, lista2, q2, uniao, &qUniao);

    printf("\nLista intercalada: ");
    listar(intercalada, qIntercalada);

    printf("Intersecao das listas: ");
    listar(intersecao, qIntersecao);

    printf("Uniao das listas: ");
    listar(uniao, qUniao);

    printf("\nDigite o indice que deseja remover da lista uniao: ");
    scanf("%d", &indice);

    if (indice < 0 || indice >= qUniao) {
        printf("Erro: indice invalido.\n");
    } else {
        removerPeloIndice(uniao, &qUniao, indice);
    }

    printf("Lista uniao apos a remocao: ");
    listar(uniao, qUniao);

    return 0;
}
