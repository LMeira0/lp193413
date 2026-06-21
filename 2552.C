/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/2552
Exercício   : 2552
Data        : 21/06/2026
Objetivo    : Determinar o tabuleiro do jogo do pao de queijo.
Aprendizado : 
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n, m, i, j;

    while(scanf("%d %d", &n, &m) != EOF) {
		int matrix[n][m];
		for (i = 0; i < n; i++){
			for (j = 0; j < m; j++){
				scanf("%d", &matrix[i][j]);
			}
		}
		for(int l = 0; l < n; l++){
			for(int h = 0; h < m; h++){
				if (matrix[l][h] == 0){
					int r = 0;
					if(l - 1 >= 0){
						if(matrix[l - 1][h]){
							r++;
						}
					}
					if(l + 1 < n){
						if(matrix[l + 1][h]){
							r++;
						}
					}
					if(h - 1 >= 0){
						if(matrix[l][h - 1]){
							r++;
						}
					}
					if(h + 1 < m){
						if(matrix[l][h + 1]){
							r++;
						}
					}
					printf("%d", r);
				} 
				else {
					printf("9");
				}
			}	
			printf("\n");
		}
	}
    return 0;
}
