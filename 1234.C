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
