/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1435
Exercício   : 1435
Data        : 21/06/2026
Objetivo    : Printar uma matriz quadrada de ordem n.
Aprendizado : 
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) && n != 0) {
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                
                int cima = i;
                int baixo = n - 1 - i;
                int esq = j;
                int dir = n - 1 - j;

                int menor_dist = cima;
                if (baixo < menor_dist) {
					menor_dist = baixo;
				}
                if (esq < menor_dist){ 
					menor_dist = esq;
				}
                if (dir < menor_dist){
					menor_dist = dir;
                }
				
				int valor = menor_dist + 1;

                if (j == 0) {
                    printf("%3d", valor);
                } else {
                    printf(" %3d", valor);
                }
            }
            printf("\n"); 
        }
        printf("\n");
    }

    return 0;
}
