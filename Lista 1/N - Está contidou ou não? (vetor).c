#include <stdio.h>
#include <stdlib.h>

int main (){

    int N, X,*v;

    scanf("%d", &N);

    v = malloc(N *sizeof(int));

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &v[i]);
    }

    scanf("%d", &X);

    if (verifica(N, v, X))
    {
        printf("pertence\n");
    }
    else{
        printf("nao pertence\n");
    }

    return 0;
}

int verifica (int a, int vet[a], int b){
    
    for (int i = 0; i < a; i++)
    {
        if (b == vet[i])
        {
            return 1;
            break;
        }
    }

    return 0;
}