#include <stdio.h>

#define ZERO 0

int paridade(int numero) {
    return (numero % 2 == ZERO) ? ZERO : 1;
}

int main() {
  
    int caso, numero;

    scanf("%d", &caso);

    while (caso--) {
    
        scanf("%d", &numero);

        printf("%d\n", paridade(numero));
    }
    return ZERO;
}