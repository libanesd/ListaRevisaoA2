//incompleto falta imprimir
/**
Usando uma estrutura de Pilha, resolva o problema a seguir: Considere que o
estacionamento das Kitnets “barato mas difícil”, em Palmas, é composta por
uma única via que guarda até dez carros. Existe apenas um a entrada/saída
no estacionamento, e esta extremidade da via dá acesso justamente à Alameda.
Se chegar um cliente para retirar um carro que não seja o mais próximo da saída,
todos os carros bloqueando seu caminho sairão do estacionamento.
O carro do morador será manobrado para fora do estacionamento,
e os outros carros voltarão a ocupar a mesma sequência inicial.
Escreva um programa que processe um grupo de linhas de entrada.
Cada linha de entrada contém um ‘E’, de entrada, ou um ‘S’ de saída,
e o número da placa do carro. Presume-se que os carros cheguem e partam na
mesma ordem que entraram no estacionamento. O programa deve imprimir uma 
mensagem sempre que um carro chegar ou sair. Quando um carro chegar,
a mensagem deve especificar se existe ou não vaga para o carro no estacionamento.
Se não houver vaga, o carro partirá sem entrar no estacionamento. Quando um carro
sair do estacionamento, a mensagem deverá incluir o número de vezes em que o carro
foi manobrado para fora do estacionamento para permitir que os outros carros saíssem.
**/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

struct garagem{
 char carro[15];
 char placa[8];
};

struct garagem pilha[MAX];
int topo=-1;

int isFull(){
   if(topo==MAX){
       return 1;
   }else{
       return 0;
   }
}

int isEmpty(){
   if(topo==-1){
       return 1;
   }else{
       return 0;
   }
}
int EMPILHAR(){
   if(isFull() ){
       return -1;
   }
   topo++;
           return 0;
  
}

int DESEMPILHAR(){
   if(isEmpty() ){
       return-2;
   }
   topo--;
           return 0;
  
}

int OPERACAO(){
 int x=1;
 while(x!=0){
   int resposta;
   printf("\nBARATO MAS DIFICIL\n");
   printf("\n1-Estacionar Carro\n2- Manobrar para saida\n");
   scanf("%i", &x);
   if(x==1){
       resposta=EMPILHAR();
       printf("digita o modelo do carro!");
       scanf("%s", pilha[topo].carro);
       printf("Digite o numero da placa!");
       scanf("%i", &pilha[topo].placa);

     }else if(x==2){
       resposta=DESEMPILHAR();
       pilha[topo].carro[15] =' ';   
       pilha[topo].placa[8]  =' ';
     }else if(x==0){
       break;
     }else{
       printf("invalid!!");
       printf("Digite uma opcao valida!");
       printf("\n1-Estacionar Carro\n2- Manobrar para saida\n");
       scanf("%i", &x);
       OPERACAO(x);
     }

     if(resposta == 0){
         printf("Sucesso");
     }else if (resposta ==-1){
         printf("pilha cheia");
     }else if (resposta ==-2){
         printf("pilha vazia");
     }
 }
}

int main(){

   OPERACAO();
   printf("finalizado");

}
