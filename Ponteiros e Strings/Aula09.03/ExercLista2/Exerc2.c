#include <stdio.h>

//minha resolução
void clone(int v1[], int v2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        *(v2 + i) = *(v1 + i);
    }
}

//resolução do professor
void clonar(int v1[], int v2[], int size)
{
    int* p1 = v1;
    int* p2 = v2;
    for (int i = 0; i < size; i++)
    {
        *p2 = *p1;
        *p1++;
        *p2++;
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
    int vet2[5];
    
    clone(vet, vet2, 6);
    printVector(vet2, 6);
}