#include"banco_dados.h"
#include<stdio.h>
#include<stdlib.h>

void main(void){
while (1)
{


    Registro novo_registro;
    //comeca iniciando o banco de dados
    inicializa_banco();

    printf("Selecione a operação desejada:\n");
    printf("1 - Gravar uma nova informação\n");
    printf("2 - Exibir todos os registros\n");
    printf("3 - Exibir um registro\n");
    printf("4 - Deletar um registro\n");

    //Le entrada do teclado e salva a operacao escolhida pelo usuario
    int operacao = 0, chave = 0;
    scanf("%i", &operacao);

    system("clear");

    switch (operacao)
    {
    case 1:
        
        printf("Operacao escolhida - Gravar informacao\n\n");
        printf("Informar o dado a ser gravado: \n");
        scanf("%i", &novo_registro.propriedade);
        chave = grava_info(novo_registro);
        printf("Chave primaria do novo registro: %i\n\n", chave);


        break;

    case 2:
        printf("Operacao escolhida - Exibir tudo\n\n");
        exibe_tudo();

        break;

    case 3:
        printf("Operacao escolhida - Exibir registro\n\n");
        printf("Insira a chave primaria do registro:\n");
        scanf("%i", &chave);
        novo_registro = exibe_registro(chave);
        print_registro(novo_registro);

        break;

    default:
        break;
    }
}
}