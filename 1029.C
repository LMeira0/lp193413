/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 26/05/2026
Objetivo    : calcular o fibonacci de algum numero.
Aprendizado : calcular o fibonacci usando recursao.
-------------------------------------------------------------------------- */

#include <stdio.h>

int fibo(int a, int *p){
    (*p)++;
    if(a==0) {
        return 0;
    }
    if(a==1) {
        return 1;
    }

    return fibo(a - 1, p) + fibo(a - 2, p);
}
int main() {

    int i, n, x, f, j = 0;

    scanf("%d", &n);

    for(i=0; i < n; i++){
        j = 0;
        scanf("%d", &x);

        f = fibo(x, &j);

        printf("fib(%d) = %d calls = %d\n", x, j - 1, f);
    }

    return 0;
}
