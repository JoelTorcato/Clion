#include <stdio.h>

int main() {
    // uma matriz é uma tabela de dados organizada em linhas e colunas, acessada por índices.

    int golos[5][3] = {
            {2, 1, 3},
            {0, 1, 0},
            {4, 0, 1},
            {1, 0, 1},
            {0, 4, 2}
    };
    int media;
    int max_golos;
    int jogador, jogo;
    int total = 0;

    printf("numero de golos marcados pelos jogadores: \n");
    for (int i = 0; i < 5; i++) { // i é o índice da linha
        for (int j = 0; j < 3; j++) { // j é o índice da coluna
            printf("%d ", golos[i][j]);
        }
        printf("\n");
    }


    printf("introduza o numero do jogador (0-4): ");
    scanf("%d", &jogador);

    printf("introduza o numero do jogo (0-2): ");
    scanf("%d", &jogo);

    if (jogador >= 0 && jogador < 5 && jogo >= 0 && jogo < 3) {
        printf("o jogador %d marcou %d golos no jogo %d \n", jogador, golos[jogador][jogo], jogo);


        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 3; j++) {
                total = total + golos[i][j];
            }
        }

        printf("o total de golos marcados por todos os jogadores em todos os jogos e: %d\n", total);



        max_golos = golos[1];

        for (int i = 0; i < 5; i++) {
            // i é o índice da linha
            for (int j = 0; j < 3; j++) {
                // j é o índice da coluna
                if (golos[i][j] > max_golos) max_golos = golos[i][j];
            }
        }
        printf("o maximo de golos foi: %d\n", max_golos);


        int media;
        media =  total/ 15;
        printf("media de golos marcados por jogo e: %d\n", media);



        }

        return 0;
}