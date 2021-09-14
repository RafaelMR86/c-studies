#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "");
	int idade;
	printf("Digite a sua idade:\n");
	scanf("%d", &idade);
	
	//verifica se é maior de idade
	if (idade >= 18){
		printf("Você é maior de idade");
	}else{
		if(idade < 12){
			printf("Vc é um nene\n");
		}else{
			printf("Você é menor de idade\n");
		}
		
	}
	


}