#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char nome[30], endereco[30], telefone[14];
}pessoa;

void imprimeS(pessoa p);

int main(){
	int menu;
	char comecar[4];
	//pessoa p[10];
	printf("Bem-vindo!\n");
	printf("Deseja comecar? (sim/nao) ");
	fflush(stdin);
	fgets(comecar, 4, stdin);
	system("cls");
	while (strcmp(comecar, "sim")==0){
		printf("Digite um numero para a opcao desejada:\n\n1-Cadastro\n2-Pesquisa\n3-Ordenar por ordem alfabetica\n4-Apresentar todos os registros\n0-Sair\n");
		scanf("%d", &menu);
		
	
			if(menu == 1){
				int quant;
				system("cls");
				printf("Quantas? ");
				scanf("%d", &quant);
				pessoa p[quant];
				char continuar[4];
				printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-CADASTRO-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
				printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-Max: 10=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
				for(int i=0;i<10;i++){
	
					//Cadastrando dados
					printf("Digite o nome da pessoa %d: ", i+1);
					fflush(stdin);
					fgets(p[i].nome, 30, stdin);
					
					printf("Digite o endereco da pessoa %d: ", i+1);
					fflush(stdin);
					fgets(p[i].endereco, 30, stdin);
					
					printf("Digite o telefone da pessoa %d: ", i+1);
					fflush(stdin);
					fgets(p[i].telefone, 30, stdin);
					system("cls");
					
					//Deseja continuar?
					printf("Deseja continuar cadastrando? (sim\\nao) ");
					fflush(stdin);
					fgets(continuar, 4, stdin);
					
					system("cls");
					
					if(strcmp(continuar,"sim")==0) continue;
					else break;system("cls");
				}continue;
				}
			else if(menu == 2){
			
				char pesquisa[30],resultado[30];
				system("cls");
				printf("Nome da pessoa que voce busca: ");
				fflush(stdin);
				fgets(pesquisa, 30, stdin);
				system("cls");
				for(int i=0;i<10;i++){
					if(strcmp(p[i].nome,pesquisa)==0){
						imprimeS(p[i]);
				}continue;
			}
//			case 3:
//				printf("Em andamento!");
//			case 4:
//				for(int i=0;i<10;i++){
//					if(strcmp(p[i].nome," ")==0){
//						printf("Registro vazio!");
//					}else imprimeS(p[i]);
//				
//				}
		}
	}
}

void imprimeS(pessoa p){
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("Nome......: %s\n", p.nome);
	printf("Endereco..: %s\n", p.endereco);
	printf("Telefone..: %s\n", p.telefone);
}
