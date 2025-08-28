#include <stdio.h>

int main() {
    int valores[10];
    int i, maior;

    printf("Digite 10 valores inteiros:\n");
    for(i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    maior = valores[0];
    for(i = 1; i < 10; i++) {
        if(valores[i] > maior) {
            maior = valores[i];
        }
    }

    printf("\nO maior valor digitado foi: %d\n", maior);

    return 0;
}