#include <stdio.h>
void somarcem(int *num) {
    *num = *num + 100;
}

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    somarcem(&valor);
    printf("O valor somado com 100 é: %d\n", valor);

    return 0;
}
