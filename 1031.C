/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1031
Exercício   : 1031
Data        : 10/06/2026
Objetivo    : Ssaber qual vai sera a aleatoriedade da regioes que serao desconectadas.
Aprendizado : .
-------------------------------------------------------------------------- */
#include <stdio.h>

int conta(int n, int m) {
    if (n == 1) {
        return 0; 
    }
    return (conta(n - 1, m) + m) % n;
}

int main() {
    int n, m;

    while (scanf("%d", &n) == 1 && n != 0) {
        m = 1; 

        while (conta(n - 1, m) != 11) {
            m++;
        }
       
        printf("%d\n", m);
    }
    return 0;
}
