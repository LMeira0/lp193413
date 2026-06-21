/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1175
Exercício   : 1175
Data        : 21/06/2026
Objetivo    : Inverter os últimos valores do vetor com os primeiros.
Aprendizado : 
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n[20];

    for(int i = 0; i < 20; i++) {
		scanf("%d", &n[i]);
	}
	for(int i = 0; i < 10; i++) {
		int f = n[i];
		n[i] = n[19 - i];
		n[19 - i] = f;
	}
	for(int i = 0; i < 20; i++) {
		printf("N[%d] = %d\n", i, n[i]);
	}
    return 0;
}
