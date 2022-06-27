#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	float m3=0;
	int mes=0, ano=0;
	char bissexto[20], resultado[20];
	
	printf("Informe o m3 gastos: \n");
	scanf("%f",&m3);
	
	if(m3 < 0){
		printf("informe o valor corretamente!");
		return 0;
	}else{		
		if(m3 <= 2.1){
			strcpy(resultado, "Consumo baixo");
		}else if(m3 > 2.1 && m3 <=6.1){
			strcpy(resultado, "Consumo normal");
		}else if(m3 > 6.1 && m3 <= 10.5){
			strcpy(resultado, "Consumo alto");
		}else if(m3 > 10.5){
			strcpy(resultado, "Consumo exagerado");
		}	
	}
	
	printf("Informe o mes: \n");
	printf("obs: 1=janeiro, 12=dezembro\n");
	scanf("%i",&mes);
	
	if(mes < 0 && mes > 12){
		printf("informe o mês corretamente");
		return 0;
	}else{
		printf("Informe o ano: \n");
		scanf("%i",&ano);
		
		if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
			strcpy(bissexto, "Ano bissexto");
		}else{
			strcpy(bissexto, "Nao bissexto");
		}		
	}
	printf("O consumo eh: %.2f\n", m3);
	printf("Tipo: %s\n", resultado);
	printf("Mes: %d\n", mes);
	printf("Ano: %d\n", ano);
	printf("Bissexto : %s\n", bissexto);
	return 0;
}
