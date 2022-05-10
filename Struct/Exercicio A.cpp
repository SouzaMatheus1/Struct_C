#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char nome[30], endereco[30], telefone[14];
}pessoa;

void imprimeS(pessoa p);

int main(){
	int menu,sair,cont = 0;
	char comecar[4];
	pessoa p[10];
	printf("Bem-vindo!\n");
	printf("Deseja comecar? (sim/nao) ");
	fflush(stdin);
	fgets(comecar, 4, stdin);
	system("cls");
	while (strcmp(comecar, "sim")==0){
		printf("Digite um numero para a opcao desejada:\n\n1-Cadastro\n2-Pesquisa\n3-Ordenar por ordem alfabetica\n4-Apresentar todos os registros\n0-Sair\n");
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				char continuar[4];
				system("cls");
				printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-CADASTRO-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
				printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-Max: 10=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
				for(int i=0;i<10;i++){
					cont = cont + 1;
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
			case 2:
				char pesquisa[30],resultado[30];
				system("cls");
				printf("Nome da pessoa que voce busca: ");
				fflush(stdin);
				fgets(pesquisa, 30, stdin);
				system("cls");
				
				for(int i=0;i<10;i++){
					if(strcmp(p[i].nome,pesquisa)==0){
						imprimeS(p[i]);
				}
				else{
				printf("Pessoa nao encontrada! :(\n"); 
				break;
					}
				}
				printf("0-Sair\n1-Menu\n\n ");
				fflush(stdin);
				scanf("%d", &sair);
				if(sair == 0){
					break;
				}else if(sair == 1){
					
				}
				continue;
				
			case 3:
				printf("\n!Em andamento!\n\n");
				break;
			case 4:
				for(int i=0;i<cont;i++){
					if(strcmp(p[i].nome," ")==0){
						printf("Registro vazio!");
					}else imprimeS(p[i]);
				
				}
			case 0:
				printf("Obrigado por utilizar nossos servicos! :)\n");
				break;
		}
	}printf("Obrigado por utilizar nossos servicos! :)\n");
}

void imprimeS(pessoa p){
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("Nome......: %s\n", p.nome);
	printf("Endereco..: %s\n", p.endereco);
	printf("Telefone..: %s\n", p.telefone);
}
