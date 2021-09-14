#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "");
	int numero_maquina;
	numero_maquina=1;

	for(numero_maquina=1; numero_maquina<10; numero_maquina++){
		printf("\nA máquina %d está conectado à rede", numero_maquina);

	}

	while(numero_maquina<=11){
       printf("\nA máquina %d está conectado à rede", numero_maquina);
       numero_maquina=numero_maquina+1; //ou também posso colocar numero_maquina++;
	}
	

}
