#include <stdio.h>
#include <stdlib.h>
/*Questao 1-

A) Pilhas são do tipo LIFO(last-in first-out) quando o último elemento colocado na pilha será retirado primeiro da pilha, a pilha pode ter acesso somente a um item por vez.

B) O push e pop que são utilizados no terminal,gitBash, sendo o push para adicionar o elemento ao topo da pilha e o pop para remover do topo.
Navegar entre páginas web.
Desfazer e refazer dos editores de textos.
*/

void empilhar(int valor,int pilha[],int *p) {
  pilha[*p] = valor;
  (*p)++;
  }
void desempilhar(int pilha[],int *p){
  (*p)--;
}

void exibir(int pilha[], int *p){
  int i = *p -1;
  for( ; i >= 0; i--)
  printf("%d", pilha[i]);
}

int main(void){
  int valor;
  int pilha[100];
  int p = 0;
  int opcao =0 ;

  
  while(opcao != 100){
    printf(">>---MENU---<< \n 0-Sair: \n 1-Empilhar: \n 2-Desempilhar: \n 3-Exibir: \n  \n");
    scanf("%d",&opcao);
    
    if(opcao == 1){
      if(p == 100){
        printf("cheio \n");
      }
      else{
         printf("Empilhar:");
          scanf("%d",&valor);
          empilhar(valor,pilha,&p);
      }

    }
    else if(opcao == 2){
      if ( p == 0){
         printf("vazio\n");
      }
      else{
         printf("desempilhar");
        scanf("%d",&p);
        desempilhar(pilha,&p);
      }
    }
    else if(opcao == 3){
     exibir(pilha,&p);
      printf("\n");
    }
    
  }
  
  return 0;
}