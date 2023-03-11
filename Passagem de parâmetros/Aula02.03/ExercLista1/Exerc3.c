#include <stdio.h>

int ocorrencia(int vet[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        int timesRepeated = 0;
        for (int j = 0; j < size; j++)
        {
            if (vet[i] == vet[j])
                timesRepeated++;
        }
        if (timesRepeated == 1)
            count++;
    }
    return count;
}

int main()
{
    int vet[] = {1, 2, 2, 3, 4, 2, 3 };
    int res = ocorrencia(vet, 7);
    printf("Há %d números que se repetem no vetor!", res);
}