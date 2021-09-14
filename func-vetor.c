#include <stdio.h>
#include <locale.h>

//todo vetor em uma func já é recebido por referencia

void digitacao(int dados[]){
	int i;
	for(i=0;i<10;i++){
		scanf("%d", &dados[i]);
	}

}
int main(){
	setlocale(LC_ALL, "");
	int valores[10];
	digitacao(valores);
	int i;
	for(i=0;i<10;i++){
		printf("\n%d", valores[i]);
	}

}