#include <stdio.h>

// minha resolução
int find(int v[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (*(v + i) == value)
            return i;
    }
    return -1;
}

// resolução do professor
int procura(int v[], int tam, int val)
{
    int *ptr = v;
    for (int i = 0; i < tam; i++)
    {
        if (*ptr == val)
            return i;
        ptr++;
    }
    return -1;
}

int main()
{
    int vet[] = {10, 20, 30, 40, 50, 60};
    int res = find(vet, 6, 60);
    
    printf("Posição do número = %d\n", res);
}