//Exercicio 9
/*
9 – Escreva um programa em C que crie um array com n inteiros, receba os
valores de cada posição e depois apresente a soma de todos os elementos
desse array
*/
#include<stdio.h>
#include<stdlib.h>

void main(void){

    int size;
    int sum=0;
    printf("Insira o numero de elementos de um array: ");
    scanf("%i", &size);

    int *p; //Cria um ponteiro para int
    p = malloc(size*sizeof(int)); //Aloca um espaço de memoria determinado pelo usuario

    for(int i=0; i<size; i++){

        scanf("%i", p+i);
        //Percorre o array utilizando ponteiro e salvando a entrada do teclado no array
    }
    
    for(int i=0; i<size; i++){

        //soma todos os valores na variavel sum
        sum += *(p+i);

    }

    printf("A soma do array e %i\n", sum);
    free(p); //libera a memoria
}