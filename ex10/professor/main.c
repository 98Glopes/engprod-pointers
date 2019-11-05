#pragma warning(disable:4996)

#include <stdio.h>
#include <string.h>

#include "BancoDeDados.h"


void AdicionarUsuario()
{
	struct Registro NovoUsuario;
	printf("\r\n-----------------------------\r\n");
	printf("AdicionarNovoItem:\r\n");
	printf("Digite um nome:");
	scanf("%s", NovoUsuario.propriedade, sizeof(char) * 20);

	NovoUsuario.Preenchido = 1;

	CadastraItem(NovoUsuario);
	printf("\r\nUsuario cadastrado!\r\n");
	printf("-----------------------------\r\n");
}

void ListarUsuarios()
{
	printf("\r\n-----------------------------\r\n");
	printf("Itens Cadastrados\r\n");
	ListaItens();
	printf("\r\n-----------------------------\r\n");
}

void main()
{	
	printf("SAPDB - Simple as Possible Database\r\n\r\n");

	int opcao = 0;

	while (1)
	{
		printf("1 - Cadastrar\r\n");
		printf("2 - Apresentar\r\n");
		printf("Escolha uma opcao:\r\n");
		scanf("%d", &opcao);

		if (opcao == 1) 
		{
			AdicionarUsuario();
		}
		else if (opcao == 2)
		{
			ListarUsuarios();
		}
		else 
		{
			printf("Opcao invalida\r\n");
		}

		opcao = 0;
	}
}