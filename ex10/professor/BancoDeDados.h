#pragma once

#define NumeroMaximoDeElementos 20
#define TamanhoMaximoString 20

//esta struct representa um item a ser cadastrado
struct Registro {
	int Preenchido;
	char propriedade[TamanhoMaximoString];
};

//esse array agrupa todos os itens cadastrados
static struct Registro MeuBanco[NumeroMaximoDeElementos];

void CadastraItem(struct Registro NovoItem);
void ListaItens();
