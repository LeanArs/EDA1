#include <stdio.h>

int main (){

    int l, d, k, p, qntPedagio, cusGasolina, cusPedagios, total;
    scanf("%d %d", &l, &d);
    scanf("%d %d", &k, &p);

    qntPedagio = l/d;

    cusGasolina = k*l;
    cusPedagios = qntPedagio * p;

    total = cusGasolina + cusPedagios;

    printf("%d\n", total);

    return 0;
}