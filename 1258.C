/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Leonardo Freire Meira
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1258
Exercício   : 1258
Data        : 21/05/2026
Objetivo    : Organizar a saida das camisas.
Aprendizado : Logica.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

typedef struct camiseta {
    char nome[50];
    char cor[10];
    char tamanho;
} camisa;

int main() {
    int n, i, j, troca;
    camisa v[60], temp;

    while (scanf("%d", &n) && n != 0) {

        for (i = 0; i < n; i++) {
            getchar();

            fgets(v[i].nome, 50, stdin);
            v[i].nome[strcspn(v[i].nome, "\n")] = '\0';

            scanf("%s %c", v[i].cor, &v[i].tamanho);
        }

        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                troca = 0;

                if (strcmp(v[j].cor, v[j + 1].cor) > 0) {
                    troca = 1;
                }
                else if (strcmp(v[j].cor, v[j + 1].cor) == 0) {
                    if (v[j].tamanho < v[j + 1].tamanho) {
                        troca = 1;
                    }
                    else if (v[j].tamanho == v[j + 1].tamanho) {
                        if (strcmp(v[j].nome, v[j + 1].nome) > 0) {
                            troca = 1;
                        }
                    }
                }
                if (troca) {
                    temp = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = temp;
                }
            }
        }
        for (i = 0; i < n; i++) {
            printf("%s %c %s\n", v[i].cor, v[i].tamanho, v[i].nome);
        }
    }

    return 0;
}
