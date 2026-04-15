/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1013
Data        : 07/04/2026
Objetivo    : Descobrir qual eh o maior valor.
Aprendizado : aprendi a usar scanf, determinar variaveis e dar um valor a elas
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, maiorAB, maiorFinal;
    
    scanf("%d %d %d", &a, &b, &c);
    
    maiorAB = (a + b + abs(a - b)) / 2;
    
    maiorFinal = (maiorAB + c + abs(maiorAB - c)) / 2;
    
    printf("%d eh o maior\n", maiorFinal);
    
    return 0;
}
