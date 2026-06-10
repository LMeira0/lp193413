/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1030
Exercício   : 1030
Data        : 09/06/2026
Objetivo    : Saber quem que vai sobra na roda.
Aprendizado : .
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int nc, n, k, i, f, j, count;
    scanf("%d", &nc);

    for(i = 0; i < nc; i++) {
        scanf("%d %d", &n, &k);
        int l[n];
        
        for(f = 0; f < n; f++) {
            l[f] = f + 1;
        }

        f = 0; 
        for (j = 0; j < n - 1; j++) {
            count = 0; 
            while (count < k) {
                if (l[f] != 0) { 
                    count++; 
                }
                
                if (count == k) {
                    l[f] = 0; 
                    break;
                }
                f = (f + 1) % n;
            }
        }

        for(f = 0; f < n; f++) {
            if(l[f] != 0) {
                printf("Case %d: %d\n", i + 1, l[f]);
                break;
            }
        }
    }

    return 0;
}
