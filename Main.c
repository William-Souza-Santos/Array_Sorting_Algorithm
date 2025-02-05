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

