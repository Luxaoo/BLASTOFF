#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, k, x, y;
    float media;

    printf("digite a idade i:\n");
    scanf("%d", &i);
    printf("digite a idade j: \n");
    scanf("%d", &j);
    printf("digite a idade k: \n");
    scanf("%d", &k);
    printf("digite a idade x:  \n");
    scanf("%d", &x);
    printf("digite a idade y: \n");
    scanf("%d", &y);

    media = (i + j + k + x + y) / 5;
    printf("A media das idades eh: %f", media);
    return 0;
}