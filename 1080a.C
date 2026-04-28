* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 16/04/2026
Objetivo    : Ler 100 numeros e dizer qual eh o maior e sua posicao desde que sejam inteiros, positivos e distintos.
Aprendizado : Aprendi a usar os vetores junto com a funcao "for"
-------------------------------------------------------------------------- */
#include <stdio.h>
 
int main() {
    
    int x, y, maior = -1, posicao = -1, i;
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &x);
        
        if (x < 0) {
            return 0;
        }
        
        if (x > maior) {
            maior = x;
            posicao = i + 1;
        }
    }
    
    printf("%d\n", maior);
    printf("%d", posicao);
    return 0;
}
