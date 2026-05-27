/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 26/05/2026
Objetivo    : calcular o a sequencia de granizo.
Aprendizado : calcular o a sequencia de granizo usando recursao.
-------------------------------------------------------------------------- */

#include <stdio.h>

int gra(int a, int maior) {
    if (a > maior) {
        maior = a;
    }
    if (a == 1) {
        return maior;
    }
    if(a % 2 == 0) {
        a = a/2;
    }
    else {
        a = a*3 + 1;
    }
    return gra(a, maior);
}
int main() {

    int n;

    while (scanf("%d", &n) == 1 && n != 0) {
        printf("%d\n", gra(n, n));
    }
    return 0;
}
