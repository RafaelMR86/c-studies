#include <stdio.h>
#include <locale.h>

void exibir_mensage(){
	printf("Sistema online"); // void função que executa e finaliza a sua tarefa 
}

int main(){
	setlocale(LC_ALL, "");
	exibir_mensage();
}