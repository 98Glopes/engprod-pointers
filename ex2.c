//Exercicio 2
/*
2 – Escreva um programa em C que possua uma função que verifica qual o 
maior número entre dois números passados como parâmetro.
A declaração da função deve ser:
void AchaMaior(int valor1, int valo2, int *menor, int *maior){
}
*/

#include<stdio.h>

void AchaMaior(int valor1, int valor2, int *maior){

    if(valor1 > valor2){
        
        *maior = valor1;
    }else{
        *maior = valor2;
    }

}

void main (void){

    int n1, n2, resultado;

    printf("Insira um numero na formatacao: n1 n2 \n");
    scanf("%i %i", &n1, &n2);

    AchaMaior(n1, n2, &resultado);

    printf("O numero maior e: %i\n", resultado);

}