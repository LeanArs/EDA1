#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c, d, calc;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    calc = abs(c - a) + abs(d - b);

    printf("%d\n", calc);

    return 0;
}