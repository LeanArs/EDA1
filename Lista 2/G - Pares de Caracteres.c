#include <stdio.h>

int quantPares = 0;

int contPares(char *input, int posicao){

    if (input[posicao + 2] == '\0') {
        return quantPares;
    }
    else if (input[posicao] == input[posicao + 2]) {
        quantPares++;
        contPares(input, posicao + 1);
    }
    else{
        contPares(input, posicao + 1);
    }

}

int main(){

    char string[1001];
    scanf("%s", string);
    printf("%d\n", contPares(string, 0));

    return 0;
}