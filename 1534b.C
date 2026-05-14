/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 13/05/2026
Objetivo    : Criar uma matriz especifica.
Aprendizado : Criar matrizes com padroes.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    int n, i, f;

    while(scanf("%d", &n) != EOF){

        for(i=0;  i<n; i++){
            for(f=0;  f<n; f++){
                if(i + f == n - 1){
                    printf("2");
                }
                else if(i == f){
                    printf("1");
                }
                else{
                    printf("3");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
