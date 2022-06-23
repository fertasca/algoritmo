#include<stdio.h>
#include<conio.h>

int main() {
	int x, i, tam=4; 
	char n;
	struct dados {
		int cod, idade, nasc[3];
		float total_dev, total_cred;
		char nome[50], end[50], sexo, status[10];
	}; 
	dados cad;
	
	do {
	
		for (i=0; i<=tam; i++) {
			printf("\nDigite os seguintes dados do Cliente %i:\n\n", i+1);
			printf("Codigo: ");
			scanf("%d", &cad[i].cod);
			printf("Nome: ");
			fflush(stdin);
			gets(cad[i].nome);
			printf("Endereco: ");
			fflush(stdin);
			gets(cad[i].end); 
			for (x = 0; x <= 2; x++){
				if (x == 0){
					printf("Informe o dia de nascimento: ");
					scanf("%d", &cad[i].nasc[0]);
				} 
				if(x == 1){
					printf("Informe o mes de nascimento: ");
					scanf("%d",&cad[i].nasc[1]);
				}
				if(x == 2){
					printf("Informe o ano de nascimento: ");
					scanf("%d",&cad[i].nasc[2]);
				}
			}
			printf("Sexo: ");
			fflush(stdin);
			cad[i].sexo=getche();
			printf("\nTotal devolvido: R$ ");
			scanf("%f", &cad[i].total_dev); 
			printf("Total creditado: R$ ");
			scanf("%f", &cad[i].total_cred);
			printf("Idade: ");
			scanf("%d", &cad[i].idade);
			fflush(stdin);
			printf("Status do cadastro (ativo ou inativo): ");				
			gets(cad[i].status);
		}
		for (i=0; i<=tam; i++) {
			printf("\n**Cliente %i**\n", i+1);
			printf("\nCodigo: %i", cad[i].cod);
			printf("\nNome: %s", cad[i].nome);
			printf("\nEndereco: %s", cad[i].end);
			printf("\nData de Nascimento: %d/%d/%d", cad[i].nasc[0], cad[i].nasc[1], cad[i].nasc[2]);
			printf("\nSexo: %c", cad[i].sexo);
			printf("\nTotal devolvido: R$ %.2f", cad[i].total_dev);
			printf("\nTotal creditado: R$ %.2f", cad[i].total_cred);
			printf("\nIdade: %i", cad[i].idade);
			printf("\nStatus do cadastro: %s\n", cad[i].status);
		}
		printf("\nDeseja continuar cadastrando clientes? (se sim, digite 's'): ");
		n=getch();
	}	
	while ((n == 's') || (n == 'S'));
	
	return(0);
}
	
	

