/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/2727
Exercício   : 2757
Data        : 09/04/2026
Objetivo    : Devolver valores com diferentes casas decimais.
Aprendizado : Aprendi a usar if e mostrar valores com um certo numero de espacamentos ou zeros
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
    
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    if (A < -10000 || A > 10000) {
        return 0;
    }
    
    if (B < 0 || B > 99) {
        return 0;
    }
    
    if (C < 0 || C > 999) {
        return 0;
    }
    
    printf("A = %d, B = %d, C = %d\n", A, B, C);
    printf("A = %10d, B = %10d, C = %10d\n", A, B, C);
    printf("A = %010d, B = %010d, C = %010d\n", A, B, C);
    printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);
 
 
    return 0;
}
