#include <stdio.h>
#include <string.h>

void modifica(char *input, int posicao){
    
    if (input[posicao] == '\0') {
        return;
    }
    else if (input[posicao] != 'x') {
        printf("%c", input[posicao]);
        modifica(input, posicao+1);
    }
    else{
        modifica(input, posicao+1);
        printf("x");
    }

}

int main (){

    char string[1001];
    scanf("%s", string);
    modifica(string, 0);
    printf("\n");

    return 0;
}