#include <stdio.h>
#include <stdlib.h>
main()
{
    float inicio, fim, duracao;

    printf("digite a hora do inicio da partida : ");
    scanf("%f", &inicio);
    printf("digite a hora do fim da partida : ");
    scanf("%f", &fim);

    duracao = fim - inicio;

    printf("a partida durou %f horas", duracao);

    return 0;
}
