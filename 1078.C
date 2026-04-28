#include <stdio.h>
 
int main() {
    int i, N, valor;
    
    scanf("%d", &N);
    
    if (N <= 2 || N >= 1000) {
        return 0;
    }
    
    for(i = 1; i <= 10; i++) {
        valor = i*N;
        printf("%d x %d = %d\n", i, N, valor);
    }
 
    return 0;
}
