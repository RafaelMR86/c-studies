#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	char nome[20];
	printf("Digite o seu nome:\n");
	fflush(stdin);
	gets(nome); //armazeno um nome composto, se utilizo o scanf ele aramazena apenas nome simples
	printf("\nO seu nome é %s", nome);
}