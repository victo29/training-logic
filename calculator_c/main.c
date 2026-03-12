#include <stdio.h>
#include <stdlib.h>

void desenharTabuleiro(char tabuleiro[][3]){
    system("cls");
    printf("\n");
    for(int i =0; i < 3; i++){
        for(int j =0; j < 3; j++){
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2){
                printf("|");
            }
        }
        printf("\n");
        if(i < 2){
            printf("---+---+---\n");
        }
    }
    printf("\n");

}

char marcar(char tabuleiro[][3], int posicao, char jogador){

    int linha = (posicao - 1) / 3;
    int coluna = (posicao - 1) % 3;

    if (tabuleiro[linha][coluna] != 'X' && tabuleiro[linha][coluna] != 'O'){
        tabuleiro[linha][coluna] = jogador;
        return 1;
    }

    return 0;
}

char verificaVitoria(char tabuleiro[][3]){

    for(int i = 0; i<3; i++){
        if(tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2]){
            return 1;
        }
    }

    for(int i = 0; i<3; i++){
        if(tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i]){
            return 1;
        }
    }

    if(tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]){
        return 1;
    }

    if(tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]){
        return 1;
    }

    return 0;
}

int main(int argc, char *argv[]){

    char tabuleiro[3][3] ={
        '1','2','3',
        '4', '5','6',
        '7','8','9'
    };

    int jogada = 0;
    char jogador;
    int posicao;

    while (jogada <9){
        desenharTabuleiro(tabuleiro);

        jogador = (jogada %2==0) ? 'X' : 'O';

        printf("Jogador %c, escolha uma posição válida (1-9): ", jogador );
        scanf("%d", &posicao);

        if(posicao < 1 || posicao > 9){
            printf("Posicao inválida! Escolha um número entre 1 e 9.\n");
            printf("Pressione Enter para continuar...");
            getchar();
            getchar();
            continue;
        }

        if(!marcar(tabuleiro, posicao,jogador)){
            printf("Posicao inválida! Escolha um número entre 1 e 9.\n");
            printf("Pressione Enter para continuar...");
            getchar();
            getchar();

        }

        if(verificaVitoria(tabuleiro)){
            desenharTabuleiro(tabuleiro);
            printf("Jogador %c venceu!!!\n", jogador);
            break;
        }

        jogada++;
    }

    printf("Fim do jogo! Pressione Enter para sair");
    getchar();
    getchar();

    return 0;
}
