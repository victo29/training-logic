#include <stdio.h>
#include <limits.h>

#define V 6

char vertices[V] = {'A', 'B', 'C', 'D', 'E', 'F'};

int minDist(int dist[], int visitado[]) {
    int min = INT_MAX, min_index;

    for (int i = 0; i < V; i++) {
        if (!visitado[i] && dist[i] <= min) {
            min = dist[i];
            min_index = i;
        }
    }
    return min_index;
}

void imprimirCaminho(int pai[], int j) {
    if (pai[j] == -1) {
        printf("%c", vertices[j]);
        return;
    }
    imprimirCaminho(pai, pai[j]);
    printf(" -> %c", vertices[j]);
}

void dijkstra(int grafo[V][V], int origem, int destino) {
    int dist[V];
    int visitado[V];
    int pai[V];

    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        visitado[i] = 0;
        pai[i] = -1;
    }

    dist[origem] = 0;

    for (int i = 0; i < V - 1; i++) {
        int u = minDist(dist, visitado);
        visitado[u] = 1;

        for (int v = 0; v < V; v++) {
            if (!visitado[v] && grafo[u][v] &&
                dist[u] + grafo[u][v] < dist[v]) {

                dist[v] = dist[u] + grafo[u][v];
                pai[v] = u;
            }
        }
    }

    printf("\n=============================\n");
    printf("      RESULTADO FINAL\n");
    printf("=============================\n\n");

    printf("Origem: %c\n", vertices[origem]);
    printf("Destino: %c\n\n", vertices[destino]);

    printf("Menor caminho: ");
    imprimirCaminho(pai, destino);
    printf("\n");

    printf("Distancia total: %d\n\n", dist[destino]);

    printf("Menores distancias:\n");
    for (int i = 0; i < V; i++) {
        printf("%c = %d\n", vertices[i], dist[i]);
    }

    printf("\n=============================\n");
}

int main() {
    int grafo[V][V] = {
        {0, 5, 2, 0, 0, 0},  // A
        {0, 0, 7, 8, 0, 0},  // B
        {0, 0, 0, 4, 8, 0},  // C
        {0, 0, 0, 0, 6, 4},  // D
        {0, 0, 0, 0, 0, 3},  // E
        {0, 0, 0, 0, 0, 0}   // F
    };

    dijkstra(grafo, 0, 5); // A → F

    return 0;
}
