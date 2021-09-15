#include <stdio.h>
#include <locale.h>

void soma(float valorp, float valors){
	float resultado;
	resultado = valorp + valors;
	printf("\nO valor da soma é %f", resultado);
}


void divide(float valorp, float valors){
	float resultado;
	resultado = valorp / valors;
	printf("\nO valor da divisão é %f", resultado);
}


void subtrai(float valorp, float valors){
	float resultado;
	resultado = valorp - valors;
	printf("\nO valor da subtração é %f", resultado);
}

void multiplica(float valorp, float valors){
	float resultado;
	resultado = valorp * valors;
	printf("\nO valor da multiplicação é %f", resultado);
}

int main(){
	setlocale(LC_ALL,"");
	float valor1;
	float valor2;
	int i;
	i=-1;

	printf("********* Bem-vindo à calculadora FIAP *********\n");
	printf("Quais valores gostaria de calcular?\n");
	printf("Primeiro valor:\n");
	scanf("%f", &valor1);
	printf("Segundo valor:\n");
	scanf("%f", &valor2);

	printf("\nQual operação gostaria de executar?\n 1- Soma \n 2- Subtrai \n 3- Multiplicar \n 4- Dividir \n 0- Sair \n");
	scanf("%d", &i);
	while(i!=-1){
		
		if(i==1){
			soma(valor1, valor2);
			break;

		}else if(i==2){
			subtrai(valor1, valor2);
			break;
		}
		else if(i==3){
			multiplica(valor1, valor2);
			break;
		}		
		else if(i==4){
			divide(valor1, valor2);
			break;

		}else{
			printf("Nos vemos na próxima!\n");
			break;
			
		}
		
		
	}
}

//tentar descobrir o por que a func não aceita duas variveis ao seu chamada 
// Devo utilizar void ou int <-- int recebe 
