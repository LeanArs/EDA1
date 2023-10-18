//#include <stdio.h>

long int vetor[81] = {[3 ... 80] = -1};

long int fibonacci(int n) {

    vetor[1] = 1;
    vetor[2] = 1;

    if (vetor[n] != -1) {
        return vetor[n];
    }
        vetor[n] = fibonacci(n-1) + fibonacci(n-2);
        return vetor[n];
}

/* 
int main() {

    long int m;
    scanf("%ld", &m);

    printf("%ld\n", fibonacci(m));

    return 0;
}
 */