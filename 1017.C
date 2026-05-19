/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 13/05/2026
Objetivo    : Calcular quantos litros vai gastar.
Aprendizado : .
-------------------------------------------------------------------------- */

#include <stdio.h>

float calcularLitros(int temp, int velo){

    float resultado = (velo * temp) / 12.0;
    return resultado;
}

int main() {

    int a, b;
    float c;

    scanf("%d", &a);
    scanf("%d", &b);

    c = calcularLitros(a, b);

    printf("%.3f\n", c);
    return 0;
}
