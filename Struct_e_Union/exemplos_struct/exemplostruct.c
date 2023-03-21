#include <stdio.h>

typedef struct
{
    float p1;
    float p2;
    float trab;
    int faltas;
} Aluno;

typedef struct
{
    float numerador;
    float denominador;
} Fracao;

float calcula(Fracao frac);
// const faz com que a memória
// apontada não possa ser alterada
float calcula2(const Fracao *frac); // mais recomendado receber um ponteiro, gasta menos memoria

Fracao adiciona(const Fracao *f1, const Fracao *f2);
Fracao multiplica(const Fracao *f1, const Fracao *f2);

int main()
{
    /*
    Aluno aluno1, aluno2;

    aluno1.p1 = 10;
    aluno1.p2 = 7.5;
    aluno1.trab = 8;
    aluno1.faltas = 4;

    aluno2.p1 = 6.5;
    aluno2.p2 = 4.8;
    aluno2.trab = 7.5;
    aluno2.faltas = 0;
    */

    Fracao f1;
    Fracao f2 = {5, 2};
    f1.numerador = 2;
    f1.denominador = 3;

    Fracao res1 = adiciona(&f1, &f2);
    printf("Resultado Adiciona: Numerador[f3] = %f | Denominador[f3] = %f\n", f3.numerador, f3.denominador);
    Fracao res2 = multiplica(&f1, &f2);
    printf("Resultado Multiplica: Numerador[f3] = %f | Denominador[f3] = %f\n", f3.numerador, f3.denominador);
    //printf("Valor (calcula) : %f\n", calcula(f1));
    //printf("Valor (calcula2): %f\n", calcula2(&f1));
}

float calcula(Fracao frac)
{
    return frac.numerador / frac.denominador;
}

float calcula2(const Fracao *frac)
{
    // frac->numerador = 0;
    //  return (*frac).numerador / (*frac).denominador;
    return frac->numerador / frac->denominador;
}

Fracao adiciona(const Fracao *f1, const Fracao *f2)
{
    Fracao f3;
    int denom = f1->denominador * f2->denominador;
    f3.numerador = (denom / f1->denominador * f1->numerador) + (denom / f2->denominador* f2->numerador);
    f3.denominador = denom;

    return f3;
}

Fracao multiplica(const Fracao *f1, const Fracao *f2)
{
    Fracao f3;
    f3.denominador = f1->denominador * f2->denominador;
    f3.numerador = f1->numerador * f2->numerador;

    return f3;
}

// Aluno a1;
// Aluno a2;

// a2 = a1; diferente de java, a2 nao receberá uma referencia para a1, e sim uma copia
