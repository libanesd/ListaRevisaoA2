/**
Utilizando uma estrutura de pilha, Implemente uma calculadora pós-fixada,
contendo as operações básicas (+, -, *, /)
**/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
#define BASE 0

int TOPO=0, OPERACAO=0;
float VETOR[MAX], VALOR=0, N1=0, N2=0, RESULTADO=0;

void EMPILHAR(float VALOR)
{               
    VETOR[TOPO] = VALOR;
    TOPO++;
}

float DESEMPILHAR()
{
    TOPO--;   
    RESULTADO = VETOR[TOPO];
    return RESULTADO;
}

void CALCULA()
{
    int RESULT = 0;

              printf("\nAdicao\n"); 
              N1 = DESEMPILHAR();
              N2 = DESEMPILHAR();
              RESULTADO = N1 + N2;
              printf("\n%f + %f = %f\n",N1,N2,RESULTADO);
              EMPILHAR(RESULTADO); 
              RESULT = 1;
              
    
}
void MOSTRARESULTADO()
{
      printf("Resultado e' %f\n",VETOR[BASE]);
}

int main()
{
    int aux =1;
    printf("\n  Adicao de 2 valores \n");
    while (aux != 0)
    {
          printf("\nDigite o valor1: ");
          scanf("%f",&N1);
          EMPILHAR(N1);
          printf("\nDigite o valor2: ");
          scanf("%f",&N2);
          EMPILHAR(N2);
          CALCULA();
          MOSTRARESULTADO();
          printf("\nDigite 0 para sair ou 1 para realizar outra operacao: ");
          scanf("%d",&aux);
          TOPO = BASE;
    }
    return 0; 
}
