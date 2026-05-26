#include <stdio.h>

int mdc(int a, int b){
    if(b == 0){
        return a;
    }
    return mdc(b, b % a);
    
}
int main() {
    
    int i, n, f1, f2, f;
    
    scanf("%d", &n);
    
    for(i=0; i < n; i++){
        
        scanf("%d %d", &f1, &f2);
        
        f = mdc(f1, f2);
        
        printf("%d\n", f);
    }
     
    return 0;
}
