#include <stdio.h>
float calcPesoIdeal(float altura, char sexo) {
    if (sexo == 'M' || sexo == 'm') {
        return 72.7 * altura - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        return 62.1 * altura - 44.7;
    } else {
        
        printf("Sexo inválido. Use 'M' ou 'F'.\n");
        return -1; 
    }
}

int main() {
    float altura;
    char sexo;

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o sexo (M ou F): ");
    scanf(" %c", &sexo); 

    float pesoIdeal = calcPesoIdeal(altura, sexo);

    if (pesoIdeal != -1) {
        printf("O peso ideal é: %.2f kg\n", pesoIdeal);
    }

    return 0;
}
