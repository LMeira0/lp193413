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
    int *pn = &n, *pf = &f, *pi = &i;


    while(scanf("%d", pn) != EOF){

        for(*pi=0;  *pi<n; *pi++){
            for(*pf=0;  *pf<n; *pf++){
                if(*pi + *pf == *pn - 1){
                    printf("2");
                }
                else if(*pi == *pf){
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
