#include <stdio.h>

int main() {
    int v, h;
    char tabuleiro[10][10];
    char cone[5][5], cruz[5][5], octaedro[5][5];

    // Inicializa tabuleiro com água
    for (v = 0; v < 10; v++)
        for (h = 0; h < 10; h++)
            tabuleiro[v][h] = '0';


     //inicialização do barco 1 na vertical: tamanho 3
    for (v = 0; v < 3; v++){
    tabuleiro[v][7] = '3';
    }

    //inicialização do barco 2 na horizontal: tamanho 3
    for (h = 0; h < 3; h++){
    tabuleiro[4][h] = '3';
    }  
    
    //inicialização do barco 3 na diagonal: tamanho 3
    for (v = 9, h = 9; v > 6 && h > 6; v--, h--){
    tabuleiro[v][h - 5] = '3';
    }

    //inicialização do barco 4 na diagonal: tamanho 3
    for (v = 9, h = 9; v > 6 && h > 6; v--, h--){
    tabuleiro[v][h - 7] = '3';
    }
   

    // Inicializa matriz cone
    for (v = 0; v < 5; v++)
        for (h = 0; h < 5; h++)
            cone[v][h] = '0';

    for (v = 0; v < 3; v++)
        for (h = 2 - v; h <= 2 + v; h++)
            cone[v][h] = '1';

    // Inicializa matriz cruz
    for (v = 0; v < 5; v++)
        for (h = 0; h < 5; h++)
            cruz[v][h] = '0';

    for (int i = -1; i <= 1; i++) cruz[2 + i][2] = '1';
    for (int i = -2; i <= 2; i++) cruz[2][2 + i] = '1';

    // Inicializa matriz octaedro
    for (v = 0; v < 5; v++)
        for (h = 0; h < 5; h++)
            octaedro[v][h] = '0';

    octaedro[1][2] = '1';
    octaedro[2][1] = octaedro[2][2] = octaedro[2][3] = '1';
    octaedro[3][2] = '1';

    // Aplicar cone em (2,2) — canto superior esquerdo
    for (v = 0; v < 5; v++) {
        for (h = 0; h < 5; h++) {
            int linha = 2 - 2 + v;
            int coluna = 2 - 2 + h;
            if (cone[v][h] == '1') {
                tabuleiro[linha][coluna] = '5';
            }
        }
    }

    // Aplicar cruz em (5,5) — centro do tabuleiro
    for (v = 0; v < 5; v++) {
        for (h = 0; h < 5; h++) {
            int linha = 5 - 2 + v;
            int coluna = 5 - 2 + h;
            if (cruz[v][h] == '1') {
                tabuleiro[linha][coluna] = '5';
            }
        }
    }

    // Aplicar octaedro em (7,7) — canto inferior direito
    for (v = 0; v < 5; v++) {
        for (h = 0; h < 5; h++) {
            int linha = 8 - 2 + v;
            int coluna = 7 - 2 + h;
            if (octaedro[v][h] == '1') {
                tabuleiro[linha][coluna] = '5';
            }
        }
    }

    // Exibe índice de colunas
    printf("  ");
    for (h = 0; h < 10; h++) printf("%c ", h + 'A');
    printf("\n");

    // Exibe tabuleiro
    for (v = 0; v < 10; v++) {
        printf("%d ", v);
        for (h = 0; h < 10; h++) {
            printf("%c ", tabuleiro[v][h]);
        }
        printf("\n");
    }

    // Legenda
    printf("\nLegenda:\n0 - Água\n5 - Área de habilidade\n\n");

    // Exibe matriz cone
    printf("Cone:\n");
    for (v = 0; v < 5; v++) {
        for (h = 0; h < 5; h++) {
            printf("%c ", cone[v][h]);
        }
        printf("\n");
    }

    // Exibe matriz cruz
    printf("\nCruz:\n");
    for (v = 0; v < 5; v++) {
        for (h = 0; h < 5; h++) {
            printf("%c ", cruz[v][h]);
        }
        printf("\n");
    }

    // Exibe matriz octaedro
    printf("\nOctaedro:\n");
    for (v = 0; v < 5; v++) {
        for (h = 0; h < 5; h++) {
            printf("%c ", octaedro[v][h]);
        }
        printf("\n");
    }

    #include <stdio.h>

int main() {
    int v, h;
    char tabuleiro[10][10];
    char cone[5][5], cruz[5][5], octaedro[5][5];

    // Inicializa tabuleiro com água
    for (v = 0; v < 10; v++)
        for (h = 0; h < 10; h++)
            tabuleiro[v][h] = '0';


     //inicialização do barco 1 na vertical: tamanho 3
    for (v = 0; v < 3; v++){
    tabuleiro[v][7] = '3';
    }

    //inicialização do barco 2 na horizontal: tamanho 3
    for (h = 0; h < 3; h++){
    tabuleiro[4][h] = '3';
    }  
    
    //inicialização do barco 3 na diagonal: tamanho 3
    for (v = 9, h = 9; v > 6 && h > 6; v--, h--){
    tabuleiro[v][h - 5] = '3';
    }

    //inicialização do barco 4 na diagonal: tamanho 3
    for (v = 9, h = 9; v > 6 && h > 6; v--, h--){
    tabuleiro[v][h - 7] = '3';
    }
   

    // Inicializa matriz cone
    for (v = 0; v < 5; v++)
        for (h = 0; h < 5; h++)
            cone[v][h] = '0';

    for (v = 0; v < 3; v++)
        for (h = 2 - v; h <= 2 + v; h++)
            cone[v][h] = '1';

    // Inicializa matriz cruz
    for (v = 0; v < 5; v++)
        for (h = 0; h < 5; h++)
            cruz[v][h] = '0';

    for (int i = -1; i <= 1; i++) cruz[2 + i][2] = '1';
    for (int i = -2; i <= 2; i++) cruz[2][2 + i] = '1';

    // Inicializa matriz octaedro
    for (v = 0; v < 5; v++)
        for (h = 0; h < 5; h++)
            octaedro[v][h] = '0';

    octaedro[1][2] = '1';
    octaedro[2][1] = octaedro[2][2] = octaedro[2][3] = '1';
    octaedro[3][2] = '1';

    // Aplicar cone em (2,2) — canto superior esquerdo
    for (v = 0; v < 5; v++) {
        for (h = 0; h < 5; h++) {
            int linha = 2 - 2 + v;
            int coluna = 2 - 2 + h;
            if (cone[v][h] == '1') {
                tabuleiro[linha][coluna] = '5';
            }
        }
    }

    // Aplicar cruz em (5,5) — centro do tabuleiro
    for (v = 0; v < 5; v++) {
        for (h = 0; h < 5; h++) {
            int linha = 5 - 2 + v;
            int coluna = 5 - 2 + h;
            if (cruz[v][h] == '1') {
                tabuleiro[linha][coluna] = '5';
            }
        }
    }

    // Aplicar octaedro em (7,7) — canto inferior direito
    for (v = 0; v < 5; v++) {
        for (h = 0; h < 5; h++) {
            int linha = 8 - 2 + v;
            int coluna = 7 - 2 + h;
            if (octaedro[v][h] == '1') {
                tabuleiro[linha][coluna] = '5';
            }
        }
    }

    // Exibe índice de colunas
    printf("  ");
    for (h = 0; h < 10; h++) printf("%c ", h + 'A');
    printf("\n");

    // Exibe tabuleiro
    for (v = 0; v < 10; v++) {
        printf("%d ", v);
        for (h = 0; h < 10; h++) {
            printf("%c ", tabuleiro[v][h]);
        }
        printf("\n");
    }

    // Legenda
    printf("\nLegenda:\n0 - Água\n5 - Área de habilidade\n\n");

    // Exibe matriz cone
    printf("Cone:\n");
    for (v = 0; v < 5; v++) {
        for (h = 0; h < 5; h++) {
            printf("%c ", cone[v][h]);
        }
        printf("\n");
    }

    // Exibe matriz cruz
    printf("\nCruz:\n");
    for (v = 0; v < 5; v++) {
        for (h = 0; h < 5; h++) {
            printf("%c ", cruz[v][h]);
        }
        printf("\n");
    }

    // Exibe matriz octaedro
    printf("\nOctaedro:\n");
    for (v = 0; v < 5; v++) {
        for (h = 0; h < 5; h++) {
            printf("%c ", octaedro[v][h]);
        }
        printf("\n");
    }
   
    
}

 return 0;
    
}

