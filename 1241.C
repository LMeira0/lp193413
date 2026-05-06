/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 05/05/2026
Objetivo    : Saber se uma string encaixa ou nao nao outra.
Aprendizado : Comparar digitos.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>


int main() {
    int i, n, tama, tamb, ajuda, f, encaixa;
    char a[1000], b[1000];

    scanf("%d\n", &n);

    for(i=0; i<n; i++) {
        scanf("%s %s", a, b);
        encaixa = 1;

        tama = strlen(a) - 1;
        tamb = strlen(b) - 1;

        if (tamb > tama) {
            encaixa = 0;
        }
        else {
            ajuda = tamb;

            for(f = tama; f >= tama - tamb; f--) {
                if(a[f] == b[ajuda]) {
                    ajuda--;
                    continue;
                }
                else {
                    encaixa = 0;
                    break;
                }
            }
        }
        if (encaixa == 1) {
            printf("encaixa\n");
        }
        else {
            printf("nao encaixa\n");
        }
    }
    return 0;
}    
