#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *inverteString(char *input, char *output, int tamanho, int posicao){

    if (input[posicao] == '\0') {
        return output;
    }
    else {
        output[posicao] = input[tamanho];
        tamanho--;
        posicao++;
        inverteString(input, output, tamanho, posicao);
    }
    
}

int main (){

    char string[500];
    scanf("%s", string);
    char *newString;
    newString = malloc(strlen(string) * sizeof(char));
    printf("%s\n", inverteString(string, newString, strlen(string) - 1, 0));
    return 0;
    
}
