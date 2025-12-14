#include <stdio.h>

int main() {

    char letra, nome[50], completo[50];
    int idade;
    float altura;

    printf("Primeira letra do nome: ");
    scanf(" %c", &letra);
    printf("Primeiro nome: ");
    scanf(" %49s", nome);
    printf("Nome completo: ");
    scanf(" %49s", completo);
    printf("Sua idade: ");
    scanf("%d", &idade);
    printf("Sua altura: ");
    scanf("%f", &altura);

    printf("\n--- Dados Inseridos ---\n");
    getchar();
    printf("Primeira Letra: %c;\n", letra);
    printf("Primeiro Nome: %s;\n", nome);
    printf("Nome Completo: %s;\n", completo);
    printf("Idade: %d;\n", idade);
    printf("Altura: %.2f.", altura);

    getchar();

    return 0;
}