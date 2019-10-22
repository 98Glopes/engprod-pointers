//Exercicio 3
/*
Atividades com Ponteiros
3 – Escreva um programa em C que percorra cada caracter de uma string 
usando um ponteiro para char;
*/
#include<stdio.h>

void main(void){

    char string[] = "Hello World"; //Declara a string a ser percorrida
    char *p;  //cria um ponteiro que aponta para string
    p = string; //o ponteiro aponta para o 1 elemento da string
    int length = sizeof(string); // verifica o comprimento da string

    for(int i=1; i < length; i++){
        //int i começa em 1 para ignorar o \b no fim da string
        
        printf("%c-", *p);
        p++; //incrementa o endereço salvo no ponteiro com a var i

    }
    printf("\n");
}