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

    int entrada[8] = {10, 20, 30, 40, 50, 60, 70, 90};

    
    int *e; e = entrada;
    int *s; s = malloc(sizeof(entrada));
    
    e+= (sizeof(entrada)/4);

    for(int i=1; i <= (sizeof(entrada)/4) ; i++){

        e -=i;
        *s = entrada[(sizeof(entrada)/4)-i];
        printf("%i, ", *s);
        s++;
        
    }

    printf("\n");

}