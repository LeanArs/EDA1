#include <stdio.h>
#include <string.h>

char *trocaXporY(char *input, int posicao){

    if (input[posicao] == '\0') {
        return input;
    }
    else if (input[posicao] == 'x') {
        input[posicao] = 'y';
    }
    trocaXporY(input, posicao + 1);
    
}

int main (){

    char string[100];
    scanf("%s", string);
    printf("%s\n", trocaXporY(string, 0));
    return 0;
    
}