/************************************************************************************************* 


                                    ARRAY SORTING ALGORITHM


                                      WILLIAM SANTOS 

Fazer um programa em "C" que leia uma lista de 10 produtos e pre�os e armazena-os 
em um array do tipo da estrutura abaixo. O programa deve, em seguida, ordenar o vetor 
em ordem ALFAB�TICA de nome de produto.


***************************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

# define Produtos_MAX 10 // declara uma constante com o valor 20

typedef struct {
 char nome[20];
 float preco;
} PROD; // Estrutura do enunciado

// Q Sort algorithm 

/**************************       

Q Sort algorithm

void qsort(void *base, size_t num, size_t size, int (*compar)(const void *, const void *));

base: Ponteiro para o primeiro elemento do array a ser ordenado.

num: N�mero total de elementos no array.

size: Tamanho em bytes de cada elemento do array.

compar: Ponteiro para uma fun��o de compara��o que define a ordem dos elementos.

Funcionamento:

sort usa o algoritmo QuickSort para reorganizar os elementos do array.

Ele compara pares de elementos usando a fun��o compar fornecida.
Com base no retorno de compar, qsort decide a posi��o relativa de dois elementos.


**************************/

int compararProdutos(const void *a, const void *b) {
 const PROD *produtoA = (const PROD *)a;  // Realizando Cast para estrutura do tipo PROD
 const PROD *produtoB = (const PROD *)b;  // Realizando Cast para estrutura do tipo PROD
 
 return strcmp(produtoA->nome, produtoB->nome); 
 /*
 strcmp Compara o nome dos produtos usados:
  
 Valor negativo se produtoA->nome vier antes de produtoB->nome (A < B)
 Zero se forem iguais.
 Valor positivo se produtoA->nome vier depois de produtoB->nome (A > B).
 
 
 */  
 

}


int main() {

	PROD produtos[Produtos_MAX];  // // Cria um array com 20 produtos
	
	printf("Informe os Produtos e seus precos:\n");
	
	
	// VARRE TODAS AS POSI��ES DO ARRAY Produtos_MAX
	int i;
	
 	for (i = 0; i < Produtos_MAX; i++) {
 		
 		printf("Produto %d:\n", i+1);

		
		//L� o nome do produto e armazena na caracter�stica nome do array produto_max 
		printf("Nome: ");
		scanf("%19s", produtos[i].nome); 
		/*
		O formato "%19s" no scanf significa que ele ir� ler no m�ximo 19 caracteres da entrada e armazen�-los 
		na string produtos[i].nome. O motivo desse limite � evitar estouro de buffer.
	
		*/
	
		//L� o pre�o do produto e armazena na caracter�stica pre�o do array produto_max
		printf("Preco: ");
		scanf("%f", &produtos[i].preco);
 	}


	// deixa os produtos em ordem alfab�tica pelo nome
	qsort(produtos, Produtos_MAX, sizeof(PROD), compararProdutos);
	
	//printa todas o valores do array em ordem alfab�tica
	
	printf("Produtos ordenados:\n");
	
	for(i=0;i<Produtos_MAX;i++){
	
	printf("%d. Nome: %s, Preco: %.2f\n", i+1, produtos[i].nome,produtos[i].preco);
}
	return 0;

}


