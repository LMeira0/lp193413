/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1015
Exercício   : 1015
Data        : 07/04/2026
Objetivo    : Calcular a distancia entre pontos.
Aprendizado : aprendi a usar funcoes.
-------------------------------------------------------------------------- */

#include<stdio.h>
#include<math.h>

float funcao(float *x1,float *y1,float *x2,float *y2){
    return sqrt(pow(*x2-*x1,2)+pow(*y2-*y1,2));
}
int main(){
    float x1,x2,y1,y2,d;

    scanf("%f %f",&x1,&y1);
    scanf("%f %f",&x2,&y2);

    d = funcao(&x1,&y1,&x2,&y2);

    printf("%.4f\n",distancia);

    return 0;
}
