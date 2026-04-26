/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 26/04/2026
Objetivo    : Intercalar entre maiuscula e minuscula a frase lida.
Aprendizado : Usar fgets, usar extensoes para deixar maiuscula e minuscula.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <ctype.h>

int main() {

    int i=0, maiscula = 1;
    char palavra[100];

    fgets(palavra, 100, stdin);

    while (palavra[i] != '\0') {
        if (palavra[i] == ' ' || palavra[i] == '\n') {
            i++;
            continue;
        }
        if (maiscula == 1) {
            palavra[i] = toupper(palavra[i]);
        }
        else {
            palavra[i] = tolower(palavra[i]);
        }
        maiscula = !maiscula;
        i++;
    }

    printf("%s", palavra);

    return 0;
}
