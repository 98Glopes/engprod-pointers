#include <stdio.h>
#include <memory.h>

#include "BancoDeDados.h"

void CadastraItem(struct Registro NovoItem) {

	int ContadorIndice = 0;

	for (ContadorIndice = 0;
		ContadorIndice < NumeroMaximoDeElementos;
		ContadorIndice++) {
		if (MeuBanco[ContadorIndice].Preenchido == 0)
		{
			MeuBanco[ContadorIndice].Preenchido = 
				NovoItem.Preenchido;

			memcpy(MeuBanco[ContadorIndice].propriedade, 
				NovoItem.propriedade,
				TamanhoMaximoString * sizeof(char));

			break;
		}
	}

}

void ListaItens() {

	int ContadorIndice = 0;

	printf("Elementos Cadastrados\r\n");

	for (ContadorIndice = 0;
		ContadorIndice < NumeroMaximoDeElementos;
		ContadorIndice++) {
		if (MeuBanco[ContadorIndice].Preenchido == 1)
		{
			printf("Indice: %d\r\n", ContadorIndice);
			printf("Preenchido: %d\r\n", MeuBanco[ContadorIndice].Preenchido);
			printf("Propriedade: %s\r\n", MeuBanco[ContadorIndice].propriedade);
		}
	}
}