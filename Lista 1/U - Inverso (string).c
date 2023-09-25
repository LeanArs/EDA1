#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palavra[1000];
    char *inverso;
    int tamanho;

    scanf("%s", palavra);

    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    inverso = malloc(tamanho * sizeof(char));

    for (int i = 0; i < tamanho; i++)
    {
        inverso[i] = palavra[tamanho - 1 - i];
    }

    inverso[tamanho] = '\0';

    printf("%s\n", inverso);

    return 0;
}