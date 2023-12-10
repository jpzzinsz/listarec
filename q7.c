#include <stdio.h>
#include <string.h>

#define MAX_LEN 20 

int main() {
    char palavra[MAX_LEN + 1]; 

    
    if (fgets(palavra, MAX_LEN + 1, stdin) && palavra[0] != '\n') {

      
        size_t len = strlen(palavra);
        if (palavra[len - 1] == '\n') {
            palavra[len - 1] = '\0';
        }

        
        if (len > MAX_LEN) {
            printf("A palavra passou do limite de %d letras\n", MAX_LEN);
        } else if (len >= 10) { 
            printf("palavrao\n");
        } else { 
            printf("palavrinha\n");
        }
    }

    return 0;
}