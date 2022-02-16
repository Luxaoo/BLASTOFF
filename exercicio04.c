#include <stdio.h>

int main(void)
{
    float c, f;

    printf("Digite a temperatura em graus celcius: ");
    scanf("%f", &c);

    f = (9 * c + 160) / 5;

    printf("A temperatura convertida fica = %f fahrenheit", f);

    return (0);
}
