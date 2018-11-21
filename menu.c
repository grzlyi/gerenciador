#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

#define tamanho 50

	

  typedef struct{

    char time[30];
    char jogadores[11];
    int codigo;
    char ender[40];
    char cidade[50];
    char estado[40];
    char ano[4];

  }Times;
  
  Times lertime(){
	  Times timesA;
	  fgets(timesA.time, sizeof(timesA.time), stdin);
	  setbuf(stdin, NULL); 
	  return timesA; 
  }
	  
void menu() {

    printf("\n\n==============================================\n\n");
    printf("\n G E R E N C I A M E N T O");
    printf("\n D E T I M E S");
    printf(" D E F U T E B O L\n\n");

    printf("\n\n===============================================\n");

    printf("\n1. INCLUIR NOVO TIME");
    printf("\n2. CONSULTAR TIMES PELO NOME");
    printf("\n3. ALTERAR UM TIME");
    printf("\n4. EXCLUIR UM TIME");
    printf("\n5. IMPRIMIR O CADASTRO DE TIMES");
    printf("\n6. LIMPAR TELA");
    printf("\n7. SAIR");


    printf("\n\n===============================================\n");


}
int main(){
int opcao = 0;
//Times *vet = 0;
//int n = 0;
while(opcao!=7){
 menu();
 printf("\nDigite a opcao desejada: ");
 scanf("%i", &opcao);
	switch(opcao){
			case 1: { Times A = lertime();
				// Incluir Novo Time
				//void novo_time(int quantidade);
				break;
			}
			case 2: // Consultar um time pelo nome
			//	void consultar_time(int quantidade);
				break;
			 case 3: // Alterar um Time
			 	//void alterar_time(int quantidade);
			 	break;
			 case 4: // Excluir um Time
			 	//void excluir_time(int quantidade);
			 	//quantidade-=2;
			 	break;
			 case 5: // Imprimir o Cadastro de Times
			 	//void imprimir_times(int quantidade);
			 	break;
			 case 6: // Limpar tela
			 	printf("\nLimpando tela..\n");
				system("cls");
			 	break;
			 case 7:  //Sair
			 	printf("\n===============================================\n");

	        	printf("\n A T E  M A I S ! \n");

	        	printf("\n===============================================\n");
 return 0;
				default:
			 		printf("Opcao incorreta");
			 		break;
		}
	}


	    return 0;


}
