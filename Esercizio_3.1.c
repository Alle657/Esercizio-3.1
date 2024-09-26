#include <stdio.h>

int main() {
    int numero;
    printf("Inserisci un numero\n");
    scanf("%d", &numero);
    if(numero %2 == 0){
        printf("e' un numero pari");
    } else{
        printf("e' un numero dispari");
    }

    return 0;
}
