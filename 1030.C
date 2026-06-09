#include <stdio.h>
 
int main() {
 
    int nc, n, k, i, f, j;
    scanf("%d", &nc);

    for(i=0; i < nc; i++){
        scanf("%d", &n);
        scanf("%d", &k);
        int l[n];
        for(f=0;f < n; f++){
            l[f] = f + 1;
        }
        f=0;
        j=0;
        while(j < n - 1){
            
            if(l[f] == k){
                f = k+f;
                l[f] = 0;
            }
            if(l[f] == 0){
                f++;
                continue;
            }
            if(l[f] != 0){
                l[f] = 0;
            }
        }
        printf("Case %d: %d", i+1, );
    }
 
    return 0;
}
