#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, elemento, indice, *v;

    scanf("%d", &N);

    v = malloc(N *sizeof(int));

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &v[i]);
    }

    elemento = v[0];

    for (int i = 0; i < N; i++)
    {
        if (v[i] < elemento)
        {
            indice = i;
            elemento = v[i];
        }
        else if (v[i] == elemento)
        {
            indice = 0;
        }
    }
    
    printf("%d\n", indice);
    
    return 0;
}