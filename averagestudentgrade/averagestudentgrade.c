#include <stdio.h>

int main(){
    float matematica, linguistica, filosofia;
    float resultado;

    //boas vindas
    printf("Bem vindo ao calculador de nota.\n");
    printf("Para calcular a média insira sua nota da determinada matéria!\n");

    //coletando notas
    printf("Matemática: ");
    scanf("%f", &matematica);
    printf("Linguistica: ");
    scanf("%f", &linguistica);
    printf("Filosofia: ");
    scanf("%f", &filosofia);

    //calculando média
    resultado = (matematica + linguistica + filosofia) / 3;
     
    //imprimindo resultado
    printf("A média das suas notas entre as matérias é: %.1f", resultado);
}