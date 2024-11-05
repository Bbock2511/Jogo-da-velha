#include <stdio.h>

int main() {
    char matriz[3][3];
    int jogada, x, y;
    for(int i = 0; i <= 2; i++) {
        for(int j = 0; j <= 2; j++){
            matriz[i][j] = ' ';
        }
    }
    for(jogada = 0; jogada < 9; jogada++){
        printf("Jogada: %d\n", jogada);
        printf("Digite a posição no estilo(linha coluna)\n");
        if(jogada % 2 == 0) printf("Vez do 'X': ");
        else printf("Vez do 'O': ");
        scanf(" %d %d", &x, &y);
        if(jogada % 2 == 0 && matriz[y-1][x-1] == ' ') matriz[y-1][x-1] = 'X';
        else if(jogada % 2 != 0 && matriz[y-1][x-1] == ' ') matriz[y-1][x-1] = 'O';
        else{
            jogada--;
            printf("Casa já ocupada\n");
            continue;
        }
        for(int i = 0; i <= 2; i++) {
            for(int j = 0; j <= 2; j++){
                printf("|%c|", matriz[j][i]);
            }
            printf("\n");
        }
        if(matriz[0][0] == 'X' && matriz[0][1] == 'X' && matriz[0][2] == 'X') printf("'X' ganhou"); return 0;
        if(matriz[1][0] == 'X' && matriz[1][1] == 'X' && matriz[1][2] == 'X') printf("'X' ganhou"); return 0;
        if(matriz[2][0] == 'X' && matriz[2][1] == 'X' && matriz[2][2] == 'X') printf("'X' ganhou"); return 0;
        if(matriz[0][0] == 'X' && matriz[1][1] == 'X' && matriz[2][2] == 'X') printf("'X' ganhou"); return 0;
        if(matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') printf("'X' ganhou"); return 0;
        if(matriz[0][0] == 'X' && matriz[1][0] == 'X' && matriz[2][0] == 'X') printf("'X' ganhou"); return 0;
    }

    printf("Velha\n");
    return 0;
}