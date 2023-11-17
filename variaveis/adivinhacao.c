#include <stdio.h>

int main()
{
    /* code */
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação! *");
    printf("\n*******************************************\n");

    int numerosecreto = 42;
    int chute;


    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);
    //printf("O número secreto é %d\n", numerosecreto);

    printf("insira um número inteiro: ");
    int numero;
    scanf("%d", &numero);
    printf("insira outro inteiro: ");
    int numero2;
    scanf("%d", &numero2);
    printf("A soma dos dois números é %d\n", numero * numero2);
    return 0;
}
