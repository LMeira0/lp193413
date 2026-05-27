/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 26/05/2026
Objetivo    : calcular o mdc.
Aprendizado : calcular o mdc usando recursao.
-------------------------------------------------------------------------- */
#include <stdio.h>

int mdc(int a, int b){
    if(b == 0){
        return a;
    }
    return mdc(b, a % b);
    
}
int main() {
    
    int i, n, f1, f2, f;
    
    scanf("%d", &n);
    
    for(i=0; i < n; i++){
        
        scanf("%d %d", &f1, &f2);
        
        f = mdc(f1, f2);
        
        printf("%d\n", f);
    }
     
    return 0;
}
