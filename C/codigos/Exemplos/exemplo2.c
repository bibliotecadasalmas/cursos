#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char letra, nome[50], completo[50];

    printf("Primeira letra do nome: ");
    scanf(" %c", &letra);
    printf("Primeiro nome: ");
    scanf(" %49s", nome);
    getchar();
    printf("Nome completo: ");
    fgets(completo, sizeof(completo), stdin);
    completo[strcspn(completo, "\n")] = 0;


    printf("\n--- Dados Inseridos ---\n");
    printf("Primeira Letra: %c;\n", letra);
    printf("Primeiro Nome: %s;\n", nome);
    printf("Nome Completo: %s.", completo);


    return 0;
}