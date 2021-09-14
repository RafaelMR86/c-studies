#include <stdio.h>
#include <locale.h>

//se func void iremos ver ela sendo executado e entregando o seu resultado 

//void ao_quadrado(){ 
//	int valor;
//	int resultado;
//	printf("Digite um valor para elevar ao quadrado: ");
//	scanf("%d", &valor);
//	resultado = valor * valor;
//	printf("\nO valor elevado ao quadrado é %d", resultado);
//}

// com uma func int veremos ele retornando um dado com o return (encerrando a minha func) para ser usado durante  o programa

int ao_quadrado(){ 
	int valor;
	int resultado;
	printf("Digite um valor para elevar ao quadrado: ");
	scanf("%d", &valor);
	resultado = valor * valor;
	return resultado;
}

int main(){
	setlocale(LC_ALL,"");
	printf("O quadrado é %d", ao_quadrado());

}