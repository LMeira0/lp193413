/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 26/04/2026
Objetivo    : Cancelar o a Cifra de Cesar.
Aprendizado : Logica para manusear letras.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    int casos, i, f, num;
    char texto[60];

    scanf("%d", &casos);

    for(i=0; i < casos; i++) {

        scanf("%s", texto);
        scanf("%d", &num);

        f = 0;
        while (texto[f] != '\0') {
        
            texto[f] = texto[f] - num;

            if (texto[f] < 'A'){
                texto[f] = texto[f] + 26;
            }
            f++;
        }
        
        printf("%s\n", texto);
    }
    return 0;
}
