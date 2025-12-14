#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int valor, escolha1, escolha2, valorComputador;
    srand(time(0));
    valorComputador = rand() % 100 + 1;

    printf("-- Jogo Maior, Menor ou Igual --\n");
    printf("[1] - Jogar\n");
    printf("[2] - Regra\n");
    printf("[3] - Sair\n");
    printf("Escolha: ");
    scanf("%d", &escolha1);

    switch (escolha1) {
        case 1:
            printf("\nVamos Jogar!\n");
            printf("O computador acabou de escolher um número de 1 a 100. Agora é a sua vez.\n");
            printf("Escolha um número de 1 a 100: ");
            scanf("%d", &valor);
            
            if((valor >= 1) && (valor <= 100)) {
                printf("\nVocê acha que o seu número é maior, menor ou igual que o do computador:\n");
                printf("[1]. Maior\n");
                printf("[2]. Menor\n");
                printf("[3]. Igual\n");
                printf("Escolha: ");
                scanf("%d", &escolha2);

                if (((escolha2 == 1) && (valor > valorComputador)) || ((escolha2 == 2) && (valor < valorComputador)) || ((escolha2 == 3) && (valor == valorComputador))) {
                    printf("\nParabens, você acertou ao escolher %d e o computador escolheu %d.\n", valor, valorComputador);
                } else {
                    printf("\nAh não, você errou! Você escolheu %d e o computador escolheu %d.\n", valor, valorComputador);
                }
            } else {
                printf("Número inválido, por favor feche o programa e abra novamente para tentar outra vez.\n");
            }
        break;
        case 2:
            printf("\nRegras do Jogo:\n");
            printf("1. O jogador escolhe um número de 1 a 100.\n");
            printf("2. O computador escolhera um número aleatório de 1 a 100.\n");
            printf("3. O jogador terá que adivinhar se o número que ele escolheu é maior, menor ou igual ao número do computador.\n");
            printf("4. Se o jogador acertar, ele vence! Caso contrário, o computador vence.\n");
            printf("Boa sorte!\n");
        break;
        case 3:
            printf("\nÉ uma pena que não queira jogar. Até a proxima!\n");
        break;
        default:
            printf("Opção inválida, por favor feche o programa e abra novamente para tentar outra vez.\n");
    }

    return 0;
}