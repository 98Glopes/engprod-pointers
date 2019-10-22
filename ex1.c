//Exercicio 1
/*
1 – Escreva um programa em C que crie um ponteiro que aponte para uma 
variável do tipo int. Mostre o conteudo da variável, o endereço da variável, o 
conteudo do ponteiro e o endereço do ponteiro;
*/

#include<stdio.h>

void main(void){

    int *p; //Variavel tipo ponteiro pra int
    int var = 42; //Variavel tipo int

    p = &var; //Salva o endereço da variavel no ponteiro

    printf("Valor da Variavel %i", var);
    printf("\nEndereco da variavel %p", &var);
    printf("\nValor do ponteiro %p", p);
    printf("\nValor p onde o ponteiro aponta %i", *p);
    printf("\nEndereco do ponteiro %p\n", &p);
}