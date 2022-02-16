#include <stdio.h>
int main()
{
    int n;
    int vet1[4] = {1, 2, 3, 4}, vet2[4] = {1, 2, 5, 8}, C[4];

    for (int i = 0; i < 4; i++)
    {
        n = 0;
        for (int j = 0; j < 4; j++)
        {
            // verifica se na posiçao i o vetor é
            if (vet1[i] == vet2[j])
            {
                n = vet1[i];
            }
            else
            {
                C[i] = '\0';
            }
        }
        C[i] = n;
    }
    for (int i = 0; i < 4; i++)
    {
        if (C[i] != '\0')
            printf("os dois vetores tem em comum %d.\n", C[i]);
    }

    return 0;
}
