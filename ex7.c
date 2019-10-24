//Exercicio 7
/*
7 – Escreva um programa em C que ordene um array de inteiros usando 
ponteiros (pode utilizar variáveis auxiliares)
*/
#include <stdio.h>

void swap(int *n1, int *n2){
//Função para trocar os valores de duas variaveis
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

void ordenar(int* vetor, int tam){
//função que recevebe o ponteiro do vetor e o tamanho


    for(int i=0; i < tam-1 ; i++){ //percorre o vetor até o penultimo elemento

        for(int j=i+1; j < tam; j++){
        //verifica todos os itens do vetor, sempre a partir do elemento i pra frente
        //caso exista algum elemento no vetor menor que o elemento i, estes são trocados
        //de posição. Ao final das iterações o array estará ordenado
            if(vetor[j] < vetor[i]){

                swap(&vetor[j], &vetor[i]);
            }
        }

    }
}

void main(void){
				
	int i;
				
	int array[] = {1, 5, 12, 0,7,8,15,17,3,6};
				
	ordenar(array, sizeof(array)/4);
				
	for(i = 0; i < sizeof(array)/4; i++){
		printf("%d\n", array[i]);
	}

}