/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1030
Exercício   : 1030
Data        : 09/06/2026
Objetivo    : Saber quem que vai sobrar na roda (Problema de Josephus).
Aprendizado : .
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int nc, n, k, i, j;
    int sobrevivente;

    scanf("%d", &nc);

    for (i = 0; i < nc; i++) {
        scanf("%d %d", &n, &k);
        sobrevivente = 0;
        
        for (j = 2; j <= n; j++) {
            sobrevivente = (sobrevivente + k) % j;
        }
      
        printf("Case %d: %d\n", i + 1, sobrevivente + 1);
    }

    return 0;
}
