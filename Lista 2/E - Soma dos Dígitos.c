#include <stdio.h>
#include <string.h>

int main(){

    char numero[100];
    scanf("%s", &numero);

    int tamanho = strlen(numero);
    int variacao = tamanho * 48;
    int calculo = somaDigitos(numero, tamanho);
    int resposta = calculo - variacao;

    printf("%d\n", resposta);

    return 0;
}

int somaDigitos(char *input, int posicao){

    int digito = 0;
    if (posicao == -1)
    {
        return 0;
    }
    else{
        digito = input[posicao - 1];
        return digito + somaDigitos(input, posicao -1);
    }

}