#include <stdio.h>

int main() {
    int Numero, Variavel;
    long long int Time;

    scanf("%d", &Numero);

    for (Variavel = 0; Variavel < Numero; Variavel++) {    
        
        scanf("%lld", &Time);

       if (Time < 2015) {
            printf("%lld D.C.\n", 2015 - Time);
        } else {
            printf("%lld A.C.\n", Time - 2014);
        }
    }

    return 0;
}