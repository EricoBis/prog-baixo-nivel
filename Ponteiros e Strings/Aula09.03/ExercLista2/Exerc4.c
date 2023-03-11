#include <stdio.h>

// minha solução

void swap(int *ptr1, int *ptr2)
{
    int aux = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = aux;
}

void bubbleSort(int vet[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            int *ptr1 = (vet + j + 1);
            int *ptr2 = (vet + j);

            if (*ptr1 < *ptr2)
                swap(ptr1, ptr2);
        }
    }
}

void printVector(int vet[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", vet[i]);
    }
}

int main()
{
    int vet[] = {6, 1, 5, 3, 2, 4};
    int size = 6;

    printf("Vetor desordenado: ");
    printVector(vet, size);

    printf("\nVetor ordenado: ");
    bubbleSort(vet, size);
    printVector(vet, size);
}