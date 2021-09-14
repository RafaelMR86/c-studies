#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int variavel;
	int *ponteiro;
	variavel = 10;

	ponteiro = &variavel;

	printf("A variável é de valor %d", variavel);
	printf(" \nA variavel tem o endereço %x \n", ponteiro);
	printf("\nO ponteiro contém o valor %d \n", *ponteiro);

}