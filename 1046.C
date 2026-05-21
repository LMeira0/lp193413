/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1000
Exercício   : 1046
Data        : 19/04/2026
Objetivo    : Calcular a duracao do jogo.
Aprendizado : .
-------------------------------------------------------------------------- */

#include <stdio.h>

int calcularDuracao(int inicio, int fim){

    if (inicio < fim) {
        return fim - inicio;
    }
    else {
        return 24 - inicio + fim;
    }
}

int main() {

    int a, b, c;

    scanf("%d %d", &a, &b);

    c = calcularDuracao(a, b);

    printf("O JOGO DUROU %d HORA(S)\n", c);

    return 0;
}
