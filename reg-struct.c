#include <stdio.h>
#include <locale.h>
struct dados_de_sistema{
	char sistema_operacional[20];
	char versao[20];
	int id_maquina;
};

int main(){
	setlocale(LC_ALL, "");
	struct dados_de_sistema sistema[3];
	int i;

	for(i=0; i<=2; i++){
		printf("Digite o nome do SO:\n");
		fflush(stdin);
		gets(sistema[i].sistema_operacional);
		printf("Digite a versão do SO:\n");
		fflush(stdin);
		gets(sistema[i].versao);
		printf("Digite o id da máquina:\n");
		scanf("%d", &sistema[i].id_maquina);

	}

	for(i=0; i<=2; i++){
	printf("O seu SO é %s, a sua versão é %s e o id é o %d \n", sistema[i].sistema_operacional, sistema[i].versao, sistema[i].id_maquina);

    }
}