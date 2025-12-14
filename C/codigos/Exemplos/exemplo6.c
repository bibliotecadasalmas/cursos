#include <stdio.h>

int main() {
    int i = 0, a = 0;

    printf("Função while\n");
    while (i <= 10)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        
        i++;
    }

    printf("Função Do-While\n");
    do
    {
        if (a % 2 == 0)
        {
            printf("%d\n", a);
        }
        a++;
    } while (a <=10);
    
    printf("Função For\n");
    for (int b = 0; b <= 10; b++)
    {
        if (b % 2 == 0);
        {
            printf("%d\n", b);
        }
        b++;
    }

    return 0;
}