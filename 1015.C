/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1000
Exercício   : 1000
Data        : 07/04/2026
Objetivo    : Distancia entre coordenadas.
Aprendizado : Usar a biblioteca math.h.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>
 
int main() {
 
    float x1, x2, y1, y2, d;
    
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    
    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("%.4f\n", d);
 
    return 0;
}
