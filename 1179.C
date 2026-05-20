/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1179
Exercício   : 1179
Data        : 19/05/2026
Objetivo    : Imprimir os valores pares e impares.
Aprendizado : .
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    int i, j, x, par[5], impar[5], f = 0, l = 0;

    for (i = 0; i < 15; i++) {
        scanf("%d", &x);

        if (x % 2 == 0) {
            par[l] = x;
            l++;

            if (l == 5) {
                for (j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                l = 0;
            }
        }

        else {
            impar[f] = x;
            f++;

            if (f == 5) {
                for (j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                f = 0;
            }
        }
    }

    for(j = 0; j < f; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }

    for(j = 0; j < l; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}
