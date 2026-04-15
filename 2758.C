/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2758
Data        : 09/04/2026
Objetivo    : Mostrar valores com 1, 2, 3 e 0 casas decimais.
Aprendizado : Usar variavel de precisao dupla e determinar quantas casas decimais mostrar
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
    
    float A, B;
    double C, D;
    
    scanf("%f %f", &A, &B);
    scanf("%lf %lf", &C, &D);
    
    
    if (A < -100000.0 || A > 100000.0 || B < -100000.0 || B > 100000.0 || C < -100000.0 || C > 100000.0 || D < -100000.0 || D > 100000.0) {
        return 0;
    }
    
    printf("A = %f, B = %f\nC = %f, D = %f\n", A, B, C, D);
    
    printf("A = %.1f, B = %.1f\nC = %.1f, D = %.1f\n", A, B, C, D);
    
    printf("A = %.2f, B = %.2f\nC = %.2f, D = %.2f\n", A, B, C, D);
    
    printf("A = %.3f, B = %.3f\nC = %.3f, D = %.3f\n", A, B, C, D);
    
    printf("A = %.3E, B = %.3E\nC = %.3E, D = %.3E\n", A, B, C, D);
    
    printf("A = %.0f, B = %.0f\nC = %.0f, D = %.0f\n", A, B, C, D);
  
    return 0;
}
