/**1. Quantos bytes são necessários para armazenar os dados para
 4 pessoas quando utilizamos a estrutura de dados abaixo?
 Considere uma arquitetura de 32 bits: **/

struct Pessoa{
	int codigo;
	char nome[20];
	char sobrenome[20];
	char sexo;
	char endereço[100];
	char telefone[20];
	struct Pessoa *proximoPtr;
}

#include <stdio.h>
#include <limits.h>
#include <float.h>


int main (void)
{
	  
    int codigo;
    char nome[20];
    char sobrenome[20];
    char sexo;
    char endereco[100];
    char telefone[20];
    struct Pessoa *proximoPtr;

	printf("sizeof codigo = %d \t sizeof(int) = %d. \n", sizeof(codigo), sizeof(int));

	printf("sizeof nome = %d \t sizeof(char) = %d. \n", sizeof(nome), sizeof(char));

	printf("sizeof sobrenome = %d \t sizeof(char) = %d. \n", sizeof(sobrenome), sizeof(char));

	printf("sizeof sexo = %d \t sizeof(char) = %d. \n", sizeof(sexo), sizeof(char));

	printf("sizeof endereco = %d \t sizeof(char) = %d. \n", sizeof(endereco), sizeof(char));

	printf("sizeof telefone = %d \t sizeof(char) = %d. \n", sizeof(telefone), sizeof(char));

	printf("sizeof strcut = %d  \n", sizeof(proximoPtr));

  return 0;





/**
	==> Tamanho da struct = 4 + 20 + 20 + 1 + 100 + 20 + 8 = 173 bytes.
**/
