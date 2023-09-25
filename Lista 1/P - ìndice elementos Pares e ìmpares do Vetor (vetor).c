#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, quantPar = 0, quantImp = 0;
    int *v, *par, *imp;

    scanf("%d", &N);
    v = malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0) {
            quantPar++;
        } else {
            quantImp++;
        }
    }

    par = malloc(quantPar * sizeof(int));
    imp = malloc(quantImp * sizeof(int));

    int ordemPar = 0;
    int ordemImpar = 0;

    for (int i = 0; i < N; i++) {
        if (v[i] % 2 == 0) {
            par[ordemPar] = i;
            ordemPar++;
        }
        else {
            imp[ordemImpar] = i;
            ordemImpar++;
        }
    }

    for (int i = 0; i < quantPar; i++) {
        printf("%d ", par[i]);
    }

    printf("\n");

    for (int i = 0; i < quantImp; i++) {
        printf("%d", imp[i]);
    }
    
    printf("\n");

    return 0;
}
