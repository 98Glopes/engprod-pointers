//Exercicio 5
/*
5 – Escreva um programa em C que inverte um array de inteiros utilizando um 
ponteiro;
Ex: 
Entrada: 10,20,30,40,50,60
Saida: 60,50,40,30,20,10
*/
#include<stdio.h>
#include<stdlib.h>

void main(void){

    int entrada = {1,2,3,5,6};

    int size = (sizeof entrada)/4;
    
    int *e; 
    e = entrada;
    int *s; 
    s = malloc(size);
    

    for(int i=0; i < size ; i++){

        *(s+i) = *(e + (size-1) - i);
        printf("%i, ", *(s+i));
        
    }
    free(s);
    printf("\n");

}