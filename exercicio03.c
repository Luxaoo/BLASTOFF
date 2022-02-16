#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, menor;
    float numeros[3];

    printf("digite 3 numeros");
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        printf("numero %d : ", i + 1);
        scanf("%f", &numeros[i]);
        menor = numeros[0];
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }
    printf("\ne o menor valor é %d\n\n", menor);
    system("pause");
    return 0;
}
