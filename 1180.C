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
    int n, i;
	scanf("%d", &n);
	int x[n];
	for (i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}
	int menor = x[0];
	int posicao = 0;
	for (i = 1; i < n; i++) {
		if (x[i] < menor) {
			menor = x[i];
			posicao = i;
		}
	}
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", posicao);
    
  return 0;
}
