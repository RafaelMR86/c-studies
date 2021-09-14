#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "");
	float peso;
	char eCivil;
	printf("Digite o seu peso:\n");
	scanf("%f", &peso);
	printf("O seu peso é %f kg", peso);
	printf("\nDigite A para amado ou T para triste \n");
	fflush(stdin);
	eCivil = getchar();
	printf("Vc é: %c \n", eCivil);


}