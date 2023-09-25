#include <stdio.h>

int main(){

    float A, G, Ra, Rg;
    scanf("%f %f %f %f", &A, &G, &Ra, &Rg);

    float renA, renG;
    renA = Ra/A;
    renG = Rg/G;


    if (renA > renG)
    {
        printf("A\n");
    }
    else {
        printf("G\n");
    }
    
    return 0;    
}