#include <stdio.h>

// Definindo a Recursividade
void moverBispo(int casas) {
    if (casas > 0)
    {
        printf("diagonal para cima e à direita\n");
        moverBispo(casas - 1);
    }
}
void moverTorre(int casas) {
    if (casas > 0)
    {
        printf("direita\n");
        moverTorre(casas - 1);
    }
}
void moverRainha(int casas) {
    if (casas > 0)
    {
        printf("esquerda\n");
        moverRainha(casas - 1);
    }
}
void moverCavalo(int casas) {
    if (casas > 0)
    {
        printf("cima\n");
        moverRainha(casas - 1);
    }
}

// Área para definição das variáveis para armazenar as peças
int main() {

    int escolha1, escolha2, escolha3, bispoInicio, bispoFinal, torreInicio, torreFinal, rainhaInicio, rainhaFinal, cavaloInicio, cavaloFinal;
 
    bispoInicio = 0;
    bispoFinal = 1;
    torreInicio = 0;
    torreFinal = 1;
    rainhaInicio = 0;
    rainhaFinal = 1;
    cavaloInicio = 0;
    cavaloFinal = 1;

    // 1º Movimentação - com "while"
    printf("Movimentação das peças de xadrez\n");
    printf("Selecione a 1º peça que deseja mover:\n[1] Bispo\n[2] Torre\n[3] Rainha\n[4] Cavalo\nEscolha: ");
    scanf("%d", &escolha1);

     if (escolha1 == 1)
    {
        while (bispoInicio < bispoFinal)
        {
            printf("\n");
            moverBispo(5);
            bispoInicio++;
        }
    } else if (escolha1 == 2) {
        while (torreInicio < torreFinal)
        {
            printf("\n");
            moverTorre(5);
            torreInicio++;
        }
    } else if (escolha1 == 3) {
        while (rainhaInicio < rainhaFinal)
        {
            printf("\n");
            moverRainha(8);
            rainhaInicio++;
        }
    } else if (escolha1 == 4) {
        while (cavaloInicio < cavaloFinal)
        {
            printf("\n");
            moverRainha(3);
            rainhaInicio++;
        }
    } else {
        printf("\nOpção invalidada!\n");
        printf("\n");
    }

    return 0;
}