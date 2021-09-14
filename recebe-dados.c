#include <stdio.h>
#include <locale.h>

//aqui estou passando com o ponteiro da memoria para que ele substitua com o valor da memória
void torna_negativo(int *valor){
	if(*valor>0){
		*valor = *valor * -1;
		printf("O valor negativo é %d", *valor);

	}
}

int main(){
	setlocale(LC_ALL,"");
	int valordigitado;
	printf("Digite um valor: ");
	scanf("%d", &valordigitado);

	torna_negativo(&valordigitado);
	printf("\nA variável digitada contém o valor %d", valordigitado);
}

// tirando todos os * para o ponteiro e & ao chamar a função não estaria mais usando o ponteiro e sim o valor registrado no começo, não substituindo na memória (continuaria gravado a variavel inicial)