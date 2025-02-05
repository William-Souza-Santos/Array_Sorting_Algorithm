/************************************************************************************************* 


                                    ARRAY SORTING ALGORITHM


                                      WILLIAM SANTOS 

Fazer um programa em "C" que leia uma lista de 20 produtos e preços e armazena-os 
em um array do tipo da estrutura abaixo. O programa deve, em seguida, ordenar o vetor 
em ordem ALFABÉTICA de nome de produto.


***************************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

# define Produtos_MAX 20 // declara uma constante com o valor 20

typedef struct {
 char nome[20];
 float preco;
} PROD; // Estrutura do enunciado

// Q Sort algorithm 

/**************************       

Q Sort algorithm

void qsort(void *base, size_t num, size_t size, int (*compar)(const void *, const void *));

base: Ponteiro para o primeiro elemento do array a ser ordenado.

num: Número total de elementos no array.

size: Tamanho em bytes de cada elemento do array.

compar: Ponteiro para uma função de comparação que define a ordem dos elementos.

Funcionamento:

sort usa o algoritmo QuickSort para reorganizar os elementos do array.

Ele compara pares de elementos usando a função compar fornecida.
Com base no retorno de compar, qsort decide a posição relativa de dois elementos.


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



