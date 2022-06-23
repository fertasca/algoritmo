#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float calculo();
void resultado(float aux);

int main() {
	char opc;
	float aux;
	
	do {
		system ("cls");
		aux = calculo();
		printf("\nmedia final: %.2f", aux);	
		resultado(aux);
		printf("\n\n*****Deseja fazer novo calculo S/N******\n\n");	
		do {
			opc = getch();		
			if ((opc != 'N') && (opc != 'n') && (opc != 'S') && (opc != 's')) {
				printf("\n\nDigite 'S' ou's' para fazer um novo calculo ou digite 'N' ou 'n' para sair do programa");
			}
		} while ((opc != 'N') && (opc != 'n') && (opc != 'S') && (opc != 's'));		
 	} while ((opc != 'N') && (opc != 'n'));
	
	return(0);
}
	
float calculo() {
	float n1, n2, n3, n4, med;
	printf("Entre com as 4 notas: \n");
	scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
	med = (n1 + n2 + n3 + n4)/4;
	return(med);	
}
	
void resultado(float aux) { 
	if (aux>=6) {
		printf("\n\nAluno aprovado!");
	}
	else {
		printf("\n\nAluno reprovado!");
	}
}
	
