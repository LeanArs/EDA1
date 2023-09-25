#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int *v, *par, *impar;
    int quantPar = 0;
    int quantImp = 0;

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
    impar = malloc(quantImp * sizeof(int));

    int ordemPar = 0;
    int ordemImpar = 0;

    for (int i = 0; i < N; i++) {
        if (v[i] % 2 == 0) {
            par[ordemPar] = v[i];
            ordemPar++;
        }
        else {
            impar[ordemImpar] = v[i];
            ordemImpar++;
        }
    }

    for (int i = 0; i < quantPar; i++) {
        printf("%d ", par[i]);
    }

    printf("\n");

    for (int i = 0; i < quantImp; i++) {
        printf("%d ", impar[i]);
    }
    
    return 0;
}
