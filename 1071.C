/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1071
Data        : 14/04/2026
Objetivo    : Fazer a soma dos valores impares dentro de um intervalo de numeros.
Aprendizado : Aprendi a usar o for, while e do while
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int x, y, min, max, i, soma = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x < y) {
        min = x;
        max = y;
    } else {
        min = y;
        max = x;
    }
    
/* Usando "for"
--------------------------------------------------------------------------
    for (i = min + 1; i < max; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    printf("%d\n", soma);

    return 0;
}
--------------------------------------------------------------------------/*

/* Usando "while"
--------------------------------------------------------------------------
    i = min + 1;
    
    while (i < max) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
        i++;
    }

    printf("%d\n", soma);

    return 0;
}
--------------------------------------------------------------------------/*

/* Usando "do while"
--------------------------------------------------------------------------
    i = min + 1;
    
    do {
        if (i % 2 != 0) {
            soma = soma + i;
        }
        i++;
    } while (i < max);

    printf("%d\n", soma);

    return 0;
}
--------------------------------------------------------------------------/*

