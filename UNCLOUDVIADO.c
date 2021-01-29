#include <stdio.h>

#define NUMBER 99

int main(void)
{
    int chute;
    int ganhou = 0;
    int tentativa = 1;
    printf("[*] Gayme di advinassao [*]\n");

    while (ganhou == 0)
    {
        printf("\nTemtativa = %d\n", tentativa);

        printf("\nQuau Seu chuti manu ? "); scanf("%d", &chute);

        printf("\nSeu Chute foi  hesenha = %d\n", chute);

        if (chute < 0) {
            printf("Numeros Negativos nao São cosiderados homens\n");
            continue;
        }
        else if (chute == NUMBER){
            printf("Parabens kkkk!\n");
            ganhou = 1;
        }
        else if (chute > NUMBER)
            printf("\nO Chute foi maior que o meu penis\n");
        else if (chute < NUMBER)
            printf("\nO Chute foi menor que o meu penis\n");

        tentativa = tentativa + 1;
    }
    printf("Fim de Gayme :D\nVocẽ acertou na %d Tentativa", tentativa);
}
