//exercicio 10
// header file para função do banco de dados
#pragma once

static int tamanho_banco = 20;
static int primary_key = 0;

//esta struct representa um item a ser cadastrado
typedef struct  {
	unsigned int primary_key;
	int preenchido;
	int propriedade;
	
}Registro;

//ponteiro para o vetor de Registro para alocação dinamica
static Registro *MeuBanco;

void inicializa_banco(void);
void grava_info(Registro NovoRegistro);
void exibe_tudo(void);
void print_registro(Registro NovoRegistro);
void deleta_registro(unsigned int primary_key);
void aloca_memoria(void);
int verifica_memoria(void);
Registro exibe_registro(unsigned int primary_key);