#include <stdio.h>
float calcularElemento(int n) {
    if (n < 1) {
        printf("O valor de n deve ser maior ou igual a 1.\n");
        return -1; 
    }

    float resultado = (float)(n + 5) / (n * 5);

    return resultado;
}

int main() {
    int numero;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);
    float resultado = calcularElemento(numero);
    if (resultado != -1) {
        printf("Elemento da série para n=%d: %.2f\n", numero, resultado);
    }

    return 0;
}
