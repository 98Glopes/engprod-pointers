//Exercicio 4
/*
Atividades com Ponteiros
4 – Escreva um programa em C que calcule o tamanho de uma string usando um 
ponteiro.
*/
#include<stdio.h>

int length(char *string){ //recebe o endereco inicial de uma string

    char *p = string; //cria um ponteiro aux para a pos inicial da string

    while(*p != '\0'){
        p++; //percorre a string passada como parametro até \0 incrementando o ponteiro
    }
    return (int) (p - string);// retorna a diferença entre o endereço inicial e o final

}

int main(void){

    printf("%i\n", length("123456789"));
}