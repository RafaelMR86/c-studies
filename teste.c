#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float valor1;
	float valor2;
	int i;
	i=-1;

	printf("*********Bem-vindo à calculadora FIAP********\n");
	printf("Quais valores gostaria de calcular?\n");
	printf("Primeiro valor:\n");
	scanf("%f", &valor1);
	printf("Segundo valor:\n");
	scanf("%f", &valor2);

	printf("\nQual operação gostaria de executar?\n 1- Soma \n 2- Subtrai \n 3- Multiplicar \n 4- Dividir \n 0- Sair \n");
	scanf("%d", &i);
	while(i!=-1){
		if(i==1){
			printf("deu certo");
		}else{
			if(i==2){
				printf("deu certo");
				break;
			}else{
				if(i==3){
					printf("deu certo");
					break;
				}else{
					if(i==4){
						printf("deu certo");
						break;
					}else{
						printf("Nos vemos na próxima!\n");
						break;
					}
				}
			}
	}	}
}