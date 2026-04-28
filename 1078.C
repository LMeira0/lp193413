* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : Fazer a multiplicação de um número N.
Aprendizado : Fazer tabuada de qualquer número.
-------------------------------------------------------------------------- */
#include <stdio.h>
 
int main() {
    int i, N, valor;
    
    scanf("%d", &N);
    
    if (N <= 2 || N >= 1000) {
        return 0;
    }
    
    for(i = 1; i <= 10; i++) {
        valor = i*N;
        printf("%d x %d = %d\n", i, N, valor);
    }
 
    return 0;
}
