#include <stdio.h>

void time(int* h, int* min, int* sec, int value)
{
    *h = value / 3600;
    *min = (value % 3600) / 60;
    *sec = (value % 3600) % 60;
}

int main()
{
    int h, min, sec = 0;
    int secPassed = 3800;
    time(&h, &min, &sec, secPassed);

    printf("%d : %d : %d", h, min, sec);
}