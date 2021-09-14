#include <stdio.h>
#include <locale.h>

struct dados_de_sistema{
	char sistema_operacional[20];
	char versao[20];
	int id_maquina;
};

void ler_dados(struct dados_de_sistema *dados){
	printf("Digite o nome do SO:\n");
	fflush(stdin);
	gets(dados->sistema_operacional);
	printf("Digite a versão do SO:\n");
	fflush(stdin);
	gets(dados->versao);
	printf("Digite o id da máquina:\n");
	scanf("%d", &dados->id_maquina);

}

int main(){
	setlocale(LC_ALL, "");
	struct dados_de_sistema sistema;
	ler_dados(&sistema);
	printf("\n O %s está na versão %s na máquina %d", sistema.sistema_operacional, sistema.versao, sistema.id_maquina);

  
}