#include <stdio.h>

int verifica(int ca, int mi, int ma, int nu, int a, char key[a]) {
    int x = 0, y = 0, z = 0;

    if (ca < a) {
        for (int i = 0; i < a; i++) {
            if (key[i] >= 97 && key[i] <= 122) {
                x++;
            }
            else if (key[i] >= 65 && key[i] <= 90) {
                y++;
            }
            else if (key[i] >= 48 && key[i] <= 57) {
                z++;
            }
        }
        if (x >= mi && y >= ma && z >= nu) {
            return 1;
        }
    }
    
    return 0;
}

int main () {
    int N, M, A, K;
    char senha[1000];
    int tamanho = 0;

    scanf("%d %d %d %d", &N, &M, &A, &K);
    scanf("%s", senha);

    while (senha[tamanho] != '\0') {
        tamanho++;
    }

    if (verifica(N, M, A, K, tamanho, senha))
    {
        printf("Ok =/\n");
    }
    else{
        printf("Ufa :)\n");
    }

    return 0;
}