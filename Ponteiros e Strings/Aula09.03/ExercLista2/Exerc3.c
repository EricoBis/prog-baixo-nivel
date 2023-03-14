#include <stdio.h>

// minha solução

void reverse(int vet[], int size)
{
    int* p1 = vet;
    int* p2 = vet+size-1;
    for (int i = 0; i < size / 2; i++)
    {
        int aux = *p1;
        *p1 = *p2;
        *p2 = aux;
        p1++;
        p2--;
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
    int vet[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    reverse(vet, size);
    printf("\nVetor invertido: ");
    printVector(vet, size);
}

/*
void reverse(int vet[], int size)
{
    int aux;
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            aux = *(vet + i);
            *(vet + i) = *(vet + j);
            *(vet + j) = aux;
        }
    }
}

*/