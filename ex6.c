//Exercicio 6
/*
6 – Escreva um programa em C que calcule o número de vogais e consoantes 
em uma string, usando um ponteiro
*/
#include<stdio.h>


int is_vowel(char c){

    char *vowels = "aeiou";

    while (*vowels != '\0')
    {
        if(c == *vowels)
            return 1;
        
        vowels++;
        
    }
    return 0;
}

int is_consonant(char c){

    char *consonant = "bcdfghjklmnpqrstvwxyz";

    while (*consonant != '\0')
    {
        if(c == *consonant)
            return 1;
        
        consonant++;
        
    }
    return 0;
}

void main(void){

    char *string = "o rato roeu a roupa do rei de roma";
    int v=0;
    int c=0;
    while(*string != '\0'){

        if(is_vowel(*string))
            v++;
        if(is_consonant(*string))
            c++;
        
        string++;

    }  

    printf("O numero de vogais e %i \n", v);
    printf("O numero de consoantes e %i \n", c);

}