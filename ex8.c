//Exercicio 8
/*
8 – Escreva um programa em C que crie um array com n inteiros, receba os
valores de cada posição e depois apresente o array
*/
#include<stdio.h>
#include<stdlib.h>

void main(void){

    int size;
    printf("Insira o numero de elementos de um array: ");
    scanf("%i", &size);

    int *p; //Cria um ponteiro para int
    p = malloc(size*sizeof(int)); //Aloca um espaço de memoria determinado pelo usuario

    for(int i=0; i<size; i++){

        scanf("%i", p+i);
        //Percorre o array utilizando ponteiro e salvando a entrada do teclado no array
    }
    
    for(int i=0; i<size; i++){

        printf("%i - ", *(p+i));

    }

    printf("\n");
    free(p); //libera a memoria
}