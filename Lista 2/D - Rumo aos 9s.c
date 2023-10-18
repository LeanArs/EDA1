#include <stdio.h>
#include <string.h>

int soma(char *num, int count){
    if (num[count] == '\0') {
        return 0;
    } 
    else {
        return (num[count] - '0') + soma(num, count + 1);
    }   
}

int main() {

    int output;
    char number[1001];
    char originalNumber[1001];

    while (1) {

        scanf("%s", number);
        if (number[0] == '0') {
            break;
        }

        strcpy(originalNumber, number);

        int degree = 0;
        do {
            output = soma(number, 0);
            sprintf(number, "%d", output);
            degree++;
        } while (output >= 10);

        if (output == 9){
            printf("%s is a multiple of 9 and has 9-degree %d.\n", originalNumber, degree);
        }
        else{
            printf("%s is not a multiple of 9.\n", originalNumber);
        }
 
    }

    return 0;
}
