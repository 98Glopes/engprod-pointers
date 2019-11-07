#include"banco_dados.h"
#include<stdlib.h>
#include<stdio.h>

void inicializa_banco(void){

    MeuBanco = malloc(tamanho_banco*sizeof(Registro));

    for(int i=0; i < tamanho_banco; i++){

        (MeuBanco+i)->preenchido = 0;
        
    }
}

int grava_info(Registro NovoRegistro){

    if(verifica_memoria() == 0){
        aloca_memoria();
    }
    for(int i=0; i < tamanho_banco; i++){

        if((MeuBanco+i)->preenchido == 0){

            (MeuBanco+i)->primary_key = primary_key;
            (MeuBanco+i)->preenchido = 1;
            (MeuBanco+i)->propriedade = NovoRegistro.propriedade;

            primary_key++;

            return (primary_key-1);

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
    limpa_memoria();
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
    /*
    Função que retorna a quantidade de espaço livre na memoria 
    do banco de dados
    */
    int espaco_livre = 0;
    for(int i=0; i < tamanho_banco; i++){

        if ((MeuBanco+i)->preenchido == 0)
            espaco_livre++;

    }
    return espaco_livre;
}

void limpa_memoria(void){
    /* Funcao que realmente deleta os elementos do banco de dados
       verifica se a quantidade de espaços livres na memoria é maior que 
       20 e aloca um novo espaço de memoria para o banco com a quantidade certa 
       de espaços
    */
    int espaco_livre = verifica_memoria();
    if(espaco_livre >= 20){
        
        //Aloca um novo espaco de memoria sem espacos livres
        //Cria um indice para percorrer o MeuBancoAux
        int indice = 0;
        MeuBancoAux = malloc((tamanho_banco - espaco_livre)*sizeof(Registro));
        
        //Percorre o banco de dados inteiro
        for(int i=0; i < tamanho_banco; i++){

            //Verifica se o campo contem informacao e copia para o espaco
            //de memoria auxiliar
            if((MeuBanco+i)->preenchido == 1){
                
                //copia para o banco auxiliar o conteudo do banco
                (MeuBancoAux+indice)->preenchido = 1;
                (MeuBancoAux+indice)->primary_key = (MeuBanco+i)->primary_key;
                (MeuBancoAux+indice)->propriedade = (MeuBanco+i)->propriedade;
                indice++;

            }

        }
        //Libera o espaço de memoria do banco antigo
        free(MeuBanco);
        MeuBanco = MeuBancoAux;
        printf("%i %i \n", tamanho_banco, espaco_livre);
        tamanho_banco = tamanho_banco - espaco_livre;
   }
    

}

Registro exibe_registro(int primary_key){

    for(int i = 0; i < tamanho_banco; i++){

        if( (MeuBanco+i)->primary_key == primary_key){

            print_registro(*(MeuBanco+i));
            return *(MeuBanco+i);
        }      
    }
}



