/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 07/05/2026
Objetivo    : Criptografar uma mensagem.
Aprendizado : Criptografar.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main() {
    int n, i, f, j, l, tam, tam2;
    char texto[1100], texto2[1100];

    scanf("%d%*c", &n);

    if(n > 10000 || n < 1) {
        return 0;
    }
    for(i=0; i < n; i++){

        fgets(texto, 1100, stdin);
        texto[strcspn(texto, "\n")] = '\0';
        tam = strlen(texto);

        for(f = 0; texto[f] != '\0'; f++){

            if(texto[f]  == 'a' || texto[f]  == 'b' || texto[f]  == 'c' || texto[f]  == 'd' || texto[f]  == 'e' ||
            texto[f]  == 'f' || texto[f]  == 'g' || texto[f]  == 'h' || texto[f]  == 'i' || texto[f]  == 'j' ||
            texto[f]  == 'k' || texto[f]  == 'l' || texto[f]  == 'm' || texto[f]  == 'n' || texto[f]  == 'o' ||
            texto[f]  == 'p' || texto[f]  == 'q' || texto[f]  == 'r' || texto[f]  == 's' || texto[f]  == 't' ||
            texto[f]  == 'u' || texto[f]  == 'v' || texto[f]  == 'w' || texto[f]  == 'x' || texto[f]  == 'y' ||
            texto[f]  == 'z' || texto[f]  == 'A' || texto[f]  == 'B' || texto[f]  == 'C' || texto[f]  == 'D' ||
            texto[f]  == 'E' || texto[f]  == 'F' || texto[f]  == 'G' || texto[f]  == 'H' || texto[f]  == 'I' ||
            texto[f]  == 'J' || texto[f]  == 'K' || texto[f]  == 'L' || texto[f]  == 'M' || texto[f]  == 'N' ||
            texto[f]  == 'O' || texto[f]  == 'P' || texto[f]  == 'Q' || texto[f]  == 'R' ||  texto[f]  =='S' ||
            texto[f]  == 'T' || texto[f]  == 'U' || texto[f]  == 'V' || texto[f]  == 'W' ||  texto[f]  =='X' ||
            texto[f]  == 'Y' ||  texto[f]  =='Z'){
                texto[f] += 3;
            }
        }
        for(j=0; j < tam; j++){

            texto2[j] = texto[tam - 1 - j];
        }
        texto2[tam] = '\0';

        tam2 = (tam/2);

        for(l = tam2; l < tam; l++){
            texto2[l] -= 1;
        }

        printf("%s\n", texto2);
    }

    return 0;
}
