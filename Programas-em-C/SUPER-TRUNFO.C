#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

printf("Cadastro de cartas\n\n"); 

    /*Abaixo estão as informação que cada carta deve ter, para realizar o cadastro
    de mais cartas, basta utilizar as informções descritas abaixo para fazer uma 
    nova tela de cadastro*/

    char estado01;
    char codigo01[4];
    char cidade01[35];
    unsigned long int populacao01;
    float area01; 
    double pib01;
    double densidade01; 
    double pibper01;
    int pturisticos01;
    double superpoder01;

    
    

    /*Campo usado para coletar informações do usuario, manter a estrutura de separação de dados para adicionar linhas. 
    usar sempre o comando printf("texto desejado: "), e scanf("variavel", formato)*/

    printf("Digite uma letra de A a Z para representar o Estado: ");
    scanf(" %c", &estado01);
    
    printf("Digite o codigo alfanumerico da carta (EX: A00): ");
    scanf("%3s", codigo01);

    printf("Digite o nome da cidade: ");
    getchar();
    fgets(cidade01, 35, stdin);
        
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao01);
    
    printf("Digite a area da cidade: ");
    scanf("%f", &area01);
    
    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib01);

    if (pib01 > 0) {
        pib01 = pib01;
    } else {
        pib01 = 0;
    }
    
    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pturisticos01);
    
    if (area01 != 0) {
            densidade01 = (double) populacao01 / area01;
        } else {
            densidade01 = 0.0; // Ou outro valor apropriado
            printf("Atenção: Área da Carta 1 é zero! Densidade populacional definida como 0.\n");
        }

   
    if (populacao01 != 0) {
            pibper01 = (double) pib01 * 1000000000 / populacao01;
        } else {
            pibper01 = 0.0; // Ou outro valor apropriado
            printf("Atenção: População da Carta 1 é zero! PIB per Capita definida como 0.\n");
        }

    if (densidade01 != 0) {
            superpoder01 = (double)populacao01 + area01 + pib01 + pturisticos01 + pibper01 + (1.0f / densidade01);
        } else {
            superpoder01 = (double)populacao01 + area01 + pib01 + pturisticos01 + pibper01; // Sem o inverso
            printf("Atenção: Densidade populacional da Carta 1 é zero. Super Poder calculado sem o inverso da densidade.\n");
        }

        
    //duas linhas espeço
   printf("\n"); // Espaço 1
   printf("\n"); // Espaço 2

    /* a partir daqui ficam os dados para impressão de cada carta
    semre usar o comando printf("variavel\n", formato) para adicionar mais campos */

    printf("Carta 01\n\n");
    
    printf("Estado: %c\n", estado01);
    
    printf("Codigo: %s\n", codigo01);

    printf("Cidade: %s\n", cidade01);

    printf("População: %lu\n", populacao01);

    printf("Area: %.2f\n", area01);

    printf("P.I.B: %.2lf\n", pib01);

    printf("Pontos turisticos: %d\n", pturisticos01);

    printf("Densidade populacional: %.2lf\n", densidade01);

    printf("PIB percapto: %.2lf\n", pibper01);

    printf("Super poder: %.2lf\n", superpoder01);
     
    printf("\n"); // Linha de espaço

      /*Campo usado para coletar informações do usuario, manter a estrutura de separação de dados para adicionar linhas. 
    usar sempre o comando printf("texto desejado: "), e scanf("variavel", formato)*/

    char estado02;
    char codigo02[4];
    char cidade02[35];
    unsigned long int populacao02;
    float area02;
    double pib02;
    double densidade02; 
    double pibper02;
    int pturisticos02;
    double superpoder02;

    printf("Cadastro de cartas\n\n");

    printf("Digite uma letra de A a Z para representar o Estado: ");
    scanf(" %c", &estado02);
        
    printf("Digite o codigo alfanumerico da carta (EX: A00): ");
    scanf("%3s", codigo02);
    
    printf("Digite o nome da cidade: ");
    getchar();
    fgets(cidade02, 35, stdin);
        
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao02);   
    
    printf("Digite a area da cidade: ");
    scanf("%f", &area02);
    
    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib02);

    if (pib02 > 0) {
        pib02 = pib02;
    } else {
        pib02 = 0;

    }
        
    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pturisticos02);

    
        
     if (area02 != 0) {
            densidade02 = (double) populacao02 / area02;
        } else {
            densidade02 = 0.0; // Ou outro valor apropriado
            printf("Atenção: Área da Carta 2 é zero! Densidade populacional definida como 0.\n");
        }

   
    if (populacao02 != 0) {
            pibper02 = (double) pib02 * 1000000000 / populacao02;
        } else {
            pibper02 = 0.0; // Ou outro valor apropriado
            printf("Atenção: População da Carta 2 é zero! PIB per Capita definida como 0.\n");
        }

    if (densidade02 != 0) {
            superpoder02 = (double)populacao02 + area02 + pib02 + pturisticos02 + pibper02 + (1.0f / densidade02);
        } else {
            superpoder02 = (double)populacao02 + area02 + pib02 + pturisticos02 + pibper02; // Sem o inverso
            printf("Atenção: Densidade populacional da Carta 2 é zero. Super Poder calculado sem o inverso da densidade.\n");
        }


    //duas linhas espeço
   printf("\n"); // Espaço 1
   printf("\n"); // Espaço 2

     /* a partir daqui ficam os dados para impressão de cada carta
    semre usar o comando printf("variavel\n", formato) para adicionar mais campos */
   
    printf("Carta 02\n\n");
    
    printf("Estado: %c\n", estado02);
    
    printf("Codigo: %s\n", codigo02);

    printf("Cidade: %s\n", cidade02);

    printf("População: %lu\n", populacao02);

    printf("Area: %.2f\n", area02);

    printf("P.I.B: %.2lf\n", pib02);

    printf("Pontos turisticos: %d\n", pturisticos02);

    printf("Densidade populacional: %.2lf\n", densidade02);

    printf("PIB percapto: %.2lf\n", pibper02);

    printf("Super poder: %.2lf\n", superpoder02);
     
    printf("\n\n"); // Linha de espaço

    //comparação de cartas

    
    int opcao01, opcao02;  
    double soma01, soma02, soma03, soma04;  

    printf("COMPARAÇÃO DE CARTAS\n\n");  
    printf("Digite o numero de dois atributos abaixo.\n"); 
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. P.I.B.\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. P.I.B. percapto\n");
    printf("7. Super poder\n\n");

    //seçõa para o usuario escolher quais dados ele quer comparar

   do {
    printf("Primeiro atributo (1 a 7): ");
    scanf("%d", &opcao01);
} while (opcao01 < 1 || opcao01 > 7);

do {
    printf("Segundo atributo (1 a 7 e diferente do primeiro): ");
    scanf("%d", &opcao02);
    if (opcao02 == opcao01)
        printf("⚠️ Os atributos devem ser diferentes.\n");
} while (opcao02 < 1 || opcao02 > 7 || opcao02 == opcao01);

     printf("\n\n");

    //variavel para armazenar o resultado da comparação

    int resultado01, resultado02;

    //codigo da comparação de cartas


    switch (opcao01) {
        case 1: 
        printf("População: %lu\n", populacao01);
        printf("População: %lu\n", populacao02);
        soma01 = populacao01;
        soma02 = populacao02;
        if (populacao01 > populacao02) {
            printf("A carta 01 venceu, no atributo população!\n\n");
            resultado01 = 1;
        } else if (populacao01 < populacao02) {
            printf("A carta 01 perdeu, no atributo população!\n\n");
            resultado01 = 2;
        } else {
            printf("Empate no atributo população!\n\n");
            resultado01 = 0;
        }
        break;
    
        case 2: 
        printf("Area: %.2f\n", area01);
        printf("Area: %.2f\n", area02);
        soma01 = area01;
        soma02 = area02;
        if (area01 > area02) {
            printf("A carta 01 venceu, no atributo area!\n\n");
            resultado01 = 1;
        } else if (area01 < area02) {
            printf("A carta 01 perdeu, no atributo area!\n\n");
            resultado01 = 2;
        } else {
            printf("Empate no atributo area!\n\n");
            resultado01 = 0;
        }
        break;

        case 3: 
        printf("P.I.B: %.2lf\n", pib01);
        printf("P.I.B: %.2lf\n", pib02);
        soma01 = pib01;
        soma02 = pib02;
        if (pib01 > pib02) {
            printf("A carta 01 venceu, no atributo PIB!\n\n");
        resultado01 = 1;
        } else if (pib01 < pib02) {
            printf("A carta 01 perdeu, no atributo PIB!\n\n");
            resultado01 = 2;
        } else {
            printf("Empate no atributo PIB!\n\n");
            resultado01 = 0;
        }
        break;

        case 4:
        printf("Pontos turisticos: %d\n", pturisticos01);
        printf("Pontos turisticos: %d\n", pturisticos02);
        soma01 = pturisticos01;
        soma02 = pturisticos02;
        if (pturisticos01 > pturisticos02) {
            printf("A carta 01 venceu, no atributo pontos turisticos!\n\n");
        resultado01 = 1;
        } else if (pturisticos01 < pturisticos02) {
            printf("A carta 01 perdeu, no atributo pontos turisticos!\n\n");
            resultado01 = 2;
        } else {
            printf("Empate no atributo pontos turisticos!\n\n");
            resultado01 = 0;
        }
        break;

        case 5:
        printf("Densidade populacional: %.2lf\n", densidade01);
        printf("Densidade populacional: %.2lf\n", densidade02);
        soma01 = -densidade01;
        soma02 = -densidade02;
        if (densidade01 < densidade02) {
            printf("A carta 01 venceu, no atributo densidade populacional!\n\n");
        resultado01 = 1;
        } else if (densidade01 > densidade02) {
            printf("A carta 01 perdeu, no atributo densidade populacional!\n\n");
            resultado01 = 2;
        } else {
            printf("Empate no atributo densidade populacional!\n\n");
            resultado01 = 0;
        }
        break;
    
        case 6: 
        printf("PIB percapto: %.2lf\n", pibper01);
        printf("PIB percapto: %.2lf\n", pibper02);
        soma01 = pibper01;
        soma02 = pibper02;
        if (pibper01 > pibper02) {
            printf("A carta 01 venceu, no atributo PIB percapto!\n\n");
        resultado01 = 1;
        } else if (pibper01 < pibper02) {
            printf("A carta 01 perdeu, no atributo PIB percapto!\n\n");
            resultado01 = 2;
        } else {
            printf("Empate no atributo PIB percapto!\n\n");
            resultado01 = 0;
        }
        break;

        case 7:
        printf("Super poder: %.2lf\n", superpoder01);
        printf("Super poder: %.2lf\n", superpoder02);
        soma01 = superpoder01;
        soma02 = superpoder02;
        if (superpoder01 > superpoder02) {
            printf("A carta 01 venceu, no atributo super poder!\n\n");
         resultado01 = 1;
        } else if (superpoder01 > superpoder02) {
            printf("A carta 01 perdeu, no atributo super poder!\n\n");
            resultado01 = 2;
        } else {
            printf("Empate no atributo super poder!\n\n");
            resultado01 = 0;
        }
        break;
    }

            

        switch (opcao02) {
        case 1:
        printf("População: %lu\n", populacao01);
        printf("População: %lu\n", populacao02);
        soma03 = (double)populacao01;
        soma04 = (double)populacao02; 
         if (populacao01 > populacao02) {
            printf("A carta 01 venceu, no atributo população!\n\n");
            resultado01 = 1;
        } else if (populacao01 < populacao02) {
            printf("A carta 01 perdeu, no atributo população!\n\n");
            resultado01 = 2;
        } else {
            printf("Empate no atributo população!\n\n");
            resultado01 = 0;
        }
        break;

        case 2: 
        printf("Area: %.2f\n", area01);
        printf("Area: %.2f\n", area02);
        soma03 = area01;
        soma04 = area02;
        if (area01 > area02) {
            printf("A carta 01 venceu, no atributo area!\n\n");
            resultado01 = 1;
        } else if (area01 < area02) {
            printf("A carta 01 perdeu, no atributo area!\n\n");
            resultado01 = 2;
        } else {
            printf("Empate no atributo area!\n\n");
            resultado01 = 0;
        }
        break;

        case 3: 
        printf("P.I.B: %.2lf\n", pib01);
        printf("P.I.B: %.2lf\n", pib02);
        soma03 = pib01;
        soma04 = pib02;
        if (pib01 > pib02) {
            printf("A carta 01 venceu, no atributo PIB!\n\n");
        resultado01 = 1;
        } else if (pib01 < pib02) {
            printf("A carta 01 perdeu, no atributo PIB!\n\n");
            resultado01 = 2;
        } else {
            printf("Empate no atributo PIB!\n\n");
            resultado01 = 0;
        }
        break;

        case 4:
        printf("Pontos turisticos: %d\n", pturisticos01);
        printf("Pontos turisticos: %d\n", pturisticos02);
        soma03 = pturisticos01;
        soma04 = pturisticos02;
        if (pturisticos01 > pturisticos02) {
            printf("A carta 01 venceu, no atributo pontos turisticos!\n\n");
        resultado01 = 1;
        } else if (pturisticos01 < pturisticos02) {
            printf("A carta 01 perdeu, no atributo pontos turisticos!\n\n");
            resultado01 = 2;
        } else {
            printf("Empate no atributo pontos turisticos!\n\n");
            resultado01 = 0;
        }
        break;

        case 5:
        printf("Densidade populacional: %.2lf\n", densidade01);
        printf("Densidade populacional: %.2lf\n", densidade02);
        soma03 = -densidade01;
        soma04 = -densidade02;
        if (densidade01 < densidade02) {
            printf("A carta 01 venceu, no atributo densidade populacional!\n\n");
        resultado01 = 1;
        } else if (densidade01 > densidade02) {
            printf("A carta 01 perdeu, no atributo densidade populacional!\n\n");
            resultado01 = 2;
        } else {
            printf("Empate no atributo densidade populacional!\n\n");
            resultado01 = 0;
        }
        break;

        case 6:
        printf("PIB percapto: %.2lf\n", pibper01);
        printf("PIB percapto: %.2lf\n", pibper02);
        soma03 = pibper01;
        soma04 = pibper02;
        if (pibper01 > pibper02) {
            printf("A carta 01 venceu, no atributo PIB percapto!\n\n");
        resultado01 = 1;
        } else if (pibper01 < pibper02) {
            printf("A carta 01 perdeu, no atributo PIB percapto!\n\n");
            resultado01 = 2;
        } else {
            printf("Empate no atributo PIB percapto!\n\n");
            resultado01 = 0;
        }
        break;

        case 7:
        printf("Super poder: %.2lf\n", superpoder01);
        printf("Super poder: %.2lf\n", superpoder02);
        soma03 = superpoder01;
        soma04 = superpoder02;
        if (superpoder01 > superpoder02) {
            printf("A carta 01 venceu, no atributo super poder!\n\n");
         resultado01 = 1;
        } else if (superpoder01 > superpoder02) {
            printf("A carta 01 perdeu, no atributo super poder!\n\n");
            resultado01 = 2;
        } else {
            printf("Empate no atributo super poder!\n\n");
            resultado01 = 0;
        }
        break;
                   
    }  

    double soma05 = soma01 + soma03;
    double soma06 = soma02 + soma04;

    


    printf("Carta 01\n");
    printf("Estado: %c\n", estado01);
    printf("Atributo 01: %.2f\n", soma01);
    printf("Atributo 01: %.2f\n", soma03);
    printf("Soma dos atributos: %.2f\n\n", soma05);


    
    printf("Carta 02");
    printf("Estado: %c\n", estado02);
    printf("Atributo 01: %.2f\n", soma02);
    printf("Atributo 01: %.2f\n", soma04);
    printf("Soma dos atributos: %.2f\n\n", soma06);
    
     if (resultado01 == 1 && resultado02 == 1) {
            printf("Carta 01 é a vencedora com dois atributos maiores!\n");
        } else if (resultado01 == 1 && resultado02 == 0) {
            printf("Carta 01 é a vencedora com um atributo maior e um empate!\n");
        } else if (resultado01 == 0 && resultado02 == 1) {
            printf("Carta 01 é a vencedora com um atributo maior e um empate!\n");
        }else if (resultado01 == 2 && resultado02 == 2 ) {
            printf("Carta 02 é a vencedora com dois atributos maiores!\n");
        } else if (resultado02 == 0 && resultado02 == 2) {
            printf("Carta 02 é a vencedora com um atributo maior e um empate!\n");
        } else if (resultado02 == 2 && resultado02 == 0) {
            printf("Carta 02 é a vencedora com um atributo maior e um empate!\n");
        } else if (resultado01 == 0 && resultado02 == 0 ) {
            printf("Empate! As cartas empataram nos dois atributos!\n");
        } else if (resultado01 == 1 && resultado02 == 2) {
            printf("Empate! Cada carta venceu em um atributo\n");
        } else {
            printf("Empate! Cada carta venceu em um atributo\n");
        }    
             
     
    return 0;
}


