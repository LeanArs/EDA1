#include <stdio.h>

int main(){

    int a, b, c, x, y, z, larguraMax, comprimentoMax, alturaMax, quanContainers;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &x, &y, &z);

    larguraMax = x/a;
    comprimentoMax = y/b;
    alturaMax = z/c;
    
    quanContainers = larguraMax * comprimentoMax * alturaMax;

    printf("%d", quanContainers);

    return 0;
}