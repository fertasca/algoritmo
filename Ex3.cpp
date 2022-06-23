#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {
	char opc;
		
	do {
		printf("1. Exercicio 1\n2. Exercicio 2\n4. Exercicio 4\n5. Fim\n\n**Digite a opcao desejada**\n");
		opc = getche();
	    		
		switch (opc) {
			case '1': {
				printf("\n\n\n***Exercicio 1***\n");
				float L, A, C, Z;
				printf("Digite o valor de L: ");
				scanf("%f", &L);
				printf("Digite o valor de A: ");
				scanf("%f", &A);
				printf("Digite o valor de C: ");
				scanf("%f", &C);
				Z = (L + A * 2.3) / C;
				printf("\nO valor de Z = %0.2f\n\n", Z);
				getch();
				system ("cls");
				break;
			}
			case '2': {
				printf("\n\n\n***Exercicio 2***\n");
				float height, weight_i;
				char sex;
				printf("entre com a altura: ");
				scanf("%f", &height);
				printf("\ndigite o sexo, 'M' para masculino e 'F' para feminino: ");
				fflush(stdin);
				sex = getche();
	
				if ((sex == 'm') || (sex == 'M')) {
					weight_i = (450.7 * height)/10;
					printf("\n\nPeso ideal = %0.2f quilos", weight_i);
				} 
				else{
					if ((sex == 'f') || (sex == 'F')){
						weight_i = (400.7 * height)/10;
						printf("\n\nPeso ideal = %0.2f quilos", weight_i);
					} 
					else {	
					printf("\n\nDados invalidos\n\n");
					} 
				}
				getch();
				system ("cls");
				break;
				
			}
			case '4': {
				printf("\n\n\n***Exercicio 4***\n");
				float sum=0, y;
				int i=1;
				printf("Entre com 20 valores\n\n");
				while (i <= 20) {
					printf("Entre com o valor %i: ", i);
					scanf("%f", &y);
					sum = sum + y;
					i++;
				}
				printf("soma = %.2f \n\n",sum);
				break;
			}
			case '5': {
				printf("\n\n\nFim de execucao - tudo de bom.");
				break;
			}
			
			default: {
				printf("\n\nvalor invalido!\n\n");
				getch();
				system ("cls");
				break;
			}
			
	    }
	} while (opc != '5');
    return(0);
}

