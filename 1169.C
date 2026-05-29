/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 28/05/2026
Objetivo    : calcular quantos kilos de arroz deverao ser pagos.
Aprendizado : calcular numero muito grandes usando recursao.
-------------------------------------------------------------------------- */

#include <stdio.h>

unsigned long long cal(unsigned long long int a) {
    if (a == 0) return 1;
    return cal(a - 1) * 2;
}
int main() {

    int testes, i;
    unsigned long long casas;
    scanf("%d", &testes);

    for (i = 1; i <= testes;  i++) {

        scanf("%lld", &casas);
        printf("%lld kg\n", (cal(casas) - 1)/12000);
    }
    return 0;
}
