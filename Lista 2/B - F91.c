#include <stdio.h>

int main(){

    int N;
    while (1)
    {
        scanf("%d", &N);
        if (N == 0) {
            break;
        }
        
        int M;
        M = maldicao(N);
        
        printf("f91(%d) = %d\n", N, M);
    }
    
    return 0;
}

int maldicao(int x){

    if (x >= 101) {
        return x -10;
    }
    else {
        return maldicao(maldicao(x+11));
    }
    

    return x; 
}