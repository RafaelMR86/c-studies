#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int id_usuario[5];
	int i;

	for(i=0; i<5; i++){
		printf("Informe a id do usuário %d:\n", i+1);
		scanf("%d", &id_usuario[i]);
	}
	for(i=0; i<5; i++){
		printf("\nO id do usuário %d é %d", i+1, id_usuario[i]);
	}
}