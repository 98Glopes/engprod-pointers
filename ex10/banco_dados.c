#include"banco_dados.h"
#include<stdlib.h>
#include<stdio.h>

void inicializa_banco(void){

    MeuBanco = malloc(tamanho_banco*sizeof(Registro));

    for(int i=0; i < tamanho_banco; i++){

        (MeuBanco+i)->preenchido = 0;
        
    }
}

void grava_info(Registro NovoRegistro){

    if(verifica_memoria() == 0){
        aloca_memoria();
    }
    for(int i=0; i < tamanho_banco; i++){

        if((MeuBanco+i)->preenchido == 0){

            (MeuBanco+i)->primary_key = primary_key;
            (MeuBanco+i)->preenchido = 1;
            (MeuBanco+i)->propriedade = NovoRegistro.propriedade;

            primary_key++;
            break;

        }
        
    }
}

void exibe_tudo(void){

    for(int i=0; i < tamanho_banco; i++){

        if( (MeuBanco+i)->preenchido == 1){

            print_registro(*(MeuBanco+i));

        }

    }

}

void print_registro(Registro NovoRegistro){

    printf("Chave Primaria: %i\n", NovoRegistro.primary_key);
    printf("informacao: %i\n\n", NovoRegistro.propriedade);
}

void deleta_registro(unsigned int primary_key){

    for(int i = 0; i < tamanho_banco; i++){

        if( (MeuBanco+i)->primary_key == primary_key){

            (MeuBanco+i)->preenchido = 0;
        }         
    }

}

void aloca_memoria(void){

    MeuBanco = realloc(MeuBanco, tamanho_banco+10);

    for(int i = tamanho_banco;
            i < tamanho_banco+10; i++){

        (MeuBanco+i)->preenchido = 0;

    }
    tamanho_banco+=10;

}

int verifica_memoria(void){
    
    int espaco_livre = 0;
    for(int i=0; i < tamanho_banco; i++){

        if ((MeuBanco+i)->preenchido == 0)
            espaco_livre++;

    }
    return espaco_livre;
}

Registro exibe_registro(unsigned int indice){

    if(indice > tamanho_banco){
        return *MeuBanco;
    }
    return *(MeuBanco+indice);
}


void main(void){

    Registro gravar;
    gravar.propriedade = 19;

    inicializa_banco();


    for(int i=0;i<50;i++){
        grava_info(gravar);
    }


    exibe_tudo();
}
