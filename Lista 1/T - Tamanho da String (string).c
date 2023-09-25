#include <stdio.h>
#include <string.h>

int main() {
    char palavra[1000];
    int tamanho;

    scanf("%s", palavra);
    
    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    printf("%d\n", tamanho);

    return 0;
}
