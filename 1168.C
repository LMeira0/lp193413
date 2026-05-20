/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1168
Exercício   : 1168
Data        : 19/05/2026
Objetivo    : Ver quantos leds vai precisar para escrever o numero.
Aprendizado : Usar switch.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    int n, i, f, soma = 0;
    char v[1000];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%s", &v);
        for(f = 0; v[f] != '\0'; f++){
            switch(v[f]){
                case '0':
                    soma += 6;
                    break;
                case '1':
                    soma += 2;
                    break;
                case '2':
                    soma += 5;
                    break;
                case '3':
                    soma += 5;
                    break;
                case '4':
                    soma += 4;
                    break;
                case '5':
                    soma += 5;
                    break;
                case '6':
                    soma += 6;
                    break;
                case '7':
                    soma += 3;
                    break;
                case '8':
                    soma += 7;
                    break;
                case '9':
                    soma += 6;
                    break;
            }
        }
        printf("%d leds\n", soma);
        soma = 0;
    }
    return 0;
}
