#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int id_usuario[5][2];
	int i;

	for(i=0; i<5; i++){
		printf("Informe a id do usuário %d:\n", i+1);
		scanf("%d", &id_usuario[i][0]);
		printf("Qual o grau de risco desse usuário:\n");
		scanf("%d", &id_usuario[i][1]);
	}
	for(i=0; i<5; i++){
		printf("\nO id do usuário %d é %d e o seu risco é %d", i+1, id_usuario[i][0], id_usuario[i][1]);
	}
}