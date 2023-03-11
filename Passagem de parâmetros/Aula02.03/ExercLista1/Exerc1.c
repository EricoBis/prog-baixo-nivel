#include <stdio.h>

int main()
{
    unsigned int v[] = {100, 50, 10, 5, 1};
    int size = 5;
    unsigned int value = 97; // valor a ser digitado


    trade(value, v, size);
}

//Exercise 1-----------------------------------
void trade(int value, int v[], int size)
{
    printf("Results: \n");

    for (int i = 0; i < size; i++)
    {
        if(value >= v[i])
        {
            int bill = v[i];
            int times = value / bill;
            value = value - (bill * times);

            printf("$%d - %d\n", v[i], times);
        }
    }  
}
//----------------------------------------------