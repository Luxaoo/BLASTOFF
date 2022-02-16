#include <stdio.h>
#include <stdlib.h>
main()
{
    float combustivel, distancia, consumo;

    printf("Quanto de combustivel o seu carro consumiu? ");
    scanf("%f", &combustivel);
    printf("Qual a distancia que voce percorreu? ");
    scanf("%f", &distancia);

    consumo = combustivel / distancia;

    printf("O seu carro percorreu %.2f Km/Litros", consumo);

    return 0;
}
